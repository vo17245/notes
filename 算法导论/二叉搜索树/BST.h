#ifndef BST_H
#define BST_H
#include<iostream>
class Node{
    public:
    int data;
    int count;
    Node* left;
    Node* right;
    Node(int _data):data(_data),left(nullptr),right(nullptr)
    ,count(1){}
    Node():data(0),right(nullptr),left(nullptr),count(1){}
};
class BST{
    public:
    Node* root;
    int insert(Node* root,int data);//root = nullptr do nothing but return -1; else return 1
    int search(Node* root,int data);//return num of data
    int _delete(Node* root,int data);
    void destory(Node*& root);
    BST();
    BST(int data);
    ~BST();
    void inorder(Node* root);//print data in order
    private:
    void destorySub(Node* root);
};
#endif