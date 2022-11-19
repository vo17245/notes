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
int random_select(int* v,unsigned p,unsigned r,unsigned i){
    if(p==r){
        return v[p];
    }
    unsigned k=random_partition(v,p,r);
    unsigned idx=k-p+1;
    if(idx==i){
        return v[k];
    }
    if(idx<i){
        return random_select(v,k,r,i-idx+1);
    }else{
        return random_select(v,p,k-1,i);
    }
}
int main(){
    int test[8]={1,2,3,6,5,4,2,7};
    std::cout<<random_select(test,0,5,2)<<std::endl;
    return 0;
}