#include<lib.h>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    void inline findMax(vector<int>& nums,int start,int len,int& max,int& index){
        max=nums[start];
        index=start;
        for(int i=start+1;i<start+len;i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
        }
    }
    TreeNode* createTree(vector<int>& nums,int start,int len){
        if(len<=0){
            return nullptr;
        }
        TreeNode* node=new TreeNode();
        int max;
        int index;
        findMax(nums,start,len,max,index);
        node->val=max;
        node->left=createTree(nums,start,index-start);
        node->right=createTree(nums,index+1,start+len-1-index);
        return node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return createTree(nums,0,nums.size());
    }
};
