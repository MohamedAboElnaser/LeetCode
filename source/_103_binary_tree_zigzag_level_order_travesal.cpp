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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int t=1;
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
            if(t==-1){
                reverse(curr_level.begin(),curr_level.end());
            }       
            ans.push_back(curr_level); 
            t*=-1;   
        }
        return ans; 
    }
};
int main(){
    
      
    return 0;

}