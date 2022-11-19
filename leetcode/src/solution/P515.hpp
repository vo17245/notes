#include"lib.h"
namespace p515 {
  class TreeNode {
  public:
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution {
  public:
      struct NodeArr {
          TreeNode* buf[4096];
          int len;
          NodeArr() :len(0) {}
          void add(TreeNode* node) {
              buf[len] = node;
              len++;
          }
          void clear() {
              len = 0;
          }
          inline TreeNode* operator[](int idx) {
              return buf[idx];
          }
      };
      vector<int> largestValues(TreeNode* root) {
          vector<int> res;
          if (root == nullptr) {
              return res;
          }
          NodeArr arr1;
          NodeArr arr2;
          NodeArr* p1;
          NodeArr* p2;
          p1 = &arr1;
          p2 = &arr2;
          p1->add(root);
          int max;

          while (p1->len != 0) {
              max = (*p1)[0]->val;
              for (int i = 0; i < (*p1).len; ++i) {
                  if (max < (*p1)[i]->val) {
                      max = (*p1)[i]->val;
                  }
                  if ((*p1)[i]->right != nullptr) {
                      (*p2).add((*p1)[i]->right);
                  }
                  if ((*p1)[i]->left != nullptr) {
                      (*p2).add((*p1)[i]->left);
                  }
              }
              (*p1).clear();
              swap(p1, p2);
              res.emplace_back(max);
          }
          return res;
      }
  };
}