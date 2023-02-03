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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        post_order(root,ans);
        return ans;
    }
    void post_order(TreeNode* curr,vector<int>&ans){
        if(!curr) return ;
        post_order(curr->left,ans);
        post_order(curr->right,ans);
        ans.push_back(curr->val); 
    }
};
int main(){
    
      
    return 0;

}