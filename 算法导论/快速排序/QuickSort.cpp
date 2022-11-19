#include<iostream>
unsigned random_number(unsigned min,unsigned max){
    return ((rand()%(max-min+1))+min);
}
unsigned random_partition(int* v,unsigned p,unsigned r){
    unsigned k=random_number(p,r);
    int x=v[p];
    v[p]=v[k];
    v[k]=x;
    unsigned left,right;
    left=right=p+1;
    while(right<=r){
        if(v[right]<v[p]){
            x=v[left];
            v[left]=v[right];
            v[right]=x;
            ++left;
        }
        ++right;
    }
    x=v[p];
    v[p]=v[left-1];
    v[left-1]=x;
    return left-1;
}
void quick_sort(int* v,unsigned p,unsigned r){
    if(p==r){
        return;
    }else if(p-r==1){
        if(v[p]>v[r]){
            int x=v[p];
            v[p]=v[r];
            v[r]=x;
        }
        return;
    }
    unsigned k=random_partition(v,p,r);
    if(k!=p){
        quick_sort(v,p,k-1);
    }
    if(k!=r){
        quick_sort(v,k+1,r);
    }
    return;

}
int main(){
    int test[8]={1,2,3,6,5,4,8,7};
    quick_sort(test,0,7);
    for(int i=0;i<8;i++){
        std::cout<<test[i]<<std::endl;
    }
    return 0;
}