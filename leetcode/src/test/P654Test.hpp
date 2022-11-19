#include<P654.hpp>
class P654Test{
    public:
    Solution s;
    void test(){
        int a[]={3,2,1,6,0,5};
        vector<int> v(a,a+6);
        TreeNode* ans=s.constructMaximumBinaryTree(v);
        list<TreeNode*> nodes;
        nodes.push_back(ans);
        while(nodes.size()!=0){
            TreeNode* node=nodes.front();
            nodes.pop_front();
            if(node==nullptr){
                cout<<"null ";
            }else{
                cout<<node->val<<" ";
                nodes.push_back(node->left);
                nodes.push_back(node->right);
            }
            
        }
        cout<<endl;
    }
};