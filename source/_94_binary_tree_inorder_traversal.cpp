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
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
    void inorder(TreeNode* curr){
       if(!curr)return;
        inorder(curr->left);
        ans.push_back(curr->val);
        inorder(curr->right);
    }
};
int main(){
    
    return 0;
}