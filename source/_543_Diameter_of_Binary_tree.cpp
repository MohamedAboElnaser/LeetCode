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
    int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
         hight(root);
         return ans;
    }
    int hight(TreeNode * root){
        if(root==nullptr)return 0;
        int lh=hight(root->left);
        int rh=hight(root->right);
        ans=max(ans,rh+lh);
        return 1+max(lh,rh);
    }

};
int main(){
    
     
      
    return 0;

}