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
    bool isCompleteTree(TreeNode* root) {
        bool No_node_exist=false;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();q.pop();
            if(curr==nullptr)
                No_node_exist=true;
            else{
                if(No_node_exist)
                    return false;
                else{
                    q.push(curr->left);
                    q.push(curr->right);
                }
            }
        }
        return true;
    }
};
int main(){
     
     
    return 0;

}