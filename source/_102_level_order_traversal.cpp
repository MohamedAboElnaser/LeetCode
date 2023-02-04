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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>curr_level;
            int level_siz=q.size();
            for(int i=0;i<level_siz;i++){
                TreeNode* curr_node=q.front();
                q.pop();
                if(curr_node->left) q.push(curr_node->left);
                if(curr_node->right)q.push(curr_node->right);
                curr_level.push_back(curr_node->val);  
            }
            ans.push_back(curr_level);    
        }
        return ans;
    }  
};
int main(){
    
      
    return 0;

}