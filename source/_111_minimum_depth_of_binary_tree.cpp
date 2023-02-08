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
    int minDepth(TreeNode* root) {
        if(root==nullptr)return 0;

     int l_dpth=minDepth(root->left);
     int r_dpth=minDepth(root->right);

         if(l_dpth==0 && r_dpth==0)return 1;
         if(l_dpth==0) return 1+r_dpth;
         if(r_dpth==0) return 1+l_dpth;
         return 1+min(l_dpth,r_dpth);
    }
};
int main(){
    
         
    return 0;

}