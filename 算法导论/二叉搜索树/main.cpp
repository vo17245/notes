#include "BST.h"

using namespace std;
void test();
int main(int argc,char** argv){
    test();
    return 0;
}
void test(){
    BST bst(20);
    bst.insert(bst.root,30);
    bst.insert(bst.root,60);
    bst.insert(bst.root,10);
    bst.insert(bst.root,40);
    bst.insert(bst.root,55);
    cout<<"insert: "<<endl;
    bst.inorder(bst.root);
    cout<<endl;
    bst._delete(bst.root,40);
    bst._delete(bst.root,60);
    cout<<"delete 40,60: "<<endl;
    bst.inorder(bst.root);
    cout<<endl;
    bst.destory(bst.root);
    cout<<"destory: "<<endl;
    bst.inorder(bst.root);
    cout<<endl;
}