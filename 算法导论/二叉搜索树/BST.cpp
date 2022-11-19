#include"BST.h"

int BST::insert(Node* root,int data){
    Node* p=nullptr;
    while(root!=nullptr&&root->data!=data){
        if(data>root->data){
            p=root;
            root=root->right;
        }else{
            //data<root->data
            p=root;
            root=root->left;
        }
    }
    if(p==nullptr){
        return -1;
    }
    if(root!=nullptr){
        ++root->count;
        return 1;
    }
    if(data>p->data){
        p->right=new Node(data);
    }else{
        //data<p->data
        p->left=new Node(data);
    }
    return 1;
}

int BST::search(Node* root,int data){
    while(root!=nullptr&&root->data!=data){
        if(data<root->data){
            root=root->left;
        }else{
            // data>root->data
            root=root->right;
        }
    }
    if(root==nullptr){
        return 0;
    }else{
        return root->count;
    }
}

int BST::_delete(Node* root,int data){
    Node* nodeToDeleteParent;
    Node* nodeToDelete;
    nodeToDelete=root;
    nodeToDeleteParent=nullptr;
    while(nodeToDelete!=nullptr&&nodeToDelete->data!=data){
        if(data<nodeToDelete->data){
            nodeToDeleteParent=nodeToDelete;
            nodeToDelete=nodeToDelete->left;
        }else{
            //data>nodeToDelete->data
            nodeToDeleteParent=nodeToDelete;
            nodeToDelete=nodeToDelete->right;
        }
    }
    if(nodeToDelete==nullptr){
        return -1;
    }
    if(nodeToDelete->left==nullptr&&nodeToDelete->right==nullptr){
        if(nodeToDeleteParent->left==nodeToDelete){
            nodeToDeleteParent->left=nullptr;
        }else{
            nodeToDeleteParent->right=nullptr;
        }
    }else if(nodeToDelete->left==nullptr&&nodeToDelete->right!=nullptr){
        if(nodeToDeleteParent->left==nodeToDelete){
            nodeToDeleteParent->left=nodeToDelete->right;
        }else{
            nodeToDeleteParent->right=nodeToDelete->right;
        }
    }else if(nodeToDelete->left!=nullptr&&nodeToDelete->right==nullptr){
        if(nodeToDeleteParent->left==nodeToDelete){
            nodeToDeleteParent->left=nodeToDelete->left;
        }else{
            nodeToDeleteParent->right=nodeToDelete->left;
        }
    }else{
        //nodeToDelete has two children
        //find minimum node in nodeToDelete's right tree
        Node* min=nodeToDelete->right;
        Node* minParent=nodeToDelete;
        while(min->left!=nullptr){
            minParent=min;
            min=min->left;
        }
        minParent->left=min->right;
        if(nodeToDeleteParent->left==nodeToDelete){
            nodeToDeleteParent->left=min;
        }else{
            nodeToDeleteParent->right=min;
        }
        min->right=nodeToDelete->right;
        min->left=nodeToDelete->left;
    }
    delete nodeToDelete;
    return -1;
}

void BST::destorySub(Node* root){
    if(root==nullptr){
        return;
    }
    destorySub(root->left);
    destorySub(root->right);
    delete root;
    return;
}

void BST::destory(Node*& root){
    destorySub(root);
    root=nullptr;
    return;
}


BST::BST(){
    root=new Node(0);
}

BST::~BST(){
    if(root!=nullptr){
        destory(root);
    }
}
BST::BST(int data){
    root=new Node(data);

}
void BST::inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    std::cout<<root->data<<"  ";
    inorder(root->right);
}