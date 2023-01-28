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
    int maxDepth(TreeNode* root) {
        int d=1;
        if(!root) return 0;
        if(root->left)
            d=1+maxDepth( root->left);
        if(root->right)
            d=max(d,1+maxDepth(root->right));
        return d;
    }
}; 
int main(){
     

    return 0;

}