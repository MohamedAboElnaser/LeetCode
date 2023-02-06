#include <bits/stdc++.h>

using namespace std;

 
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
    bool isSymmetric(TreeNode* root) {
        
        return is_sym(root,root);
    }
    bool is_sym(TreeNode* t1,TreeNode*t2){
        if(!t1 && !t2) return true;
        if(!t1 || !t2) return false;
        return (t1->val == t2->val)&&
                is_sym(t1->left,t2->right)&&
                is_sym(t1->right,t2->left);
    }
    
};
int main(){
    
      
    return 0;

}