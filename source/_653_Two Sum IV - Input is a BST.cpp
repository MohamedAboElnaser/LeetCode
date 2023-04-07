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
    bool findTarget(TreeNode* root, int k) {
      unordered_map<int,int>m;
        inorder(m,root);
        for(auto it=m.begin();it!=m.end();it++){
            int dif=k-it->first;
            if(dif!=it->first && m.count(dif))return true;
            if(dif==it->first&& it->second>1)return true;
        }
            return false;
    }
    void inorder(unordered_map<int,int>&m,TreeNode* root){
        if(!root )return ;
        inorder(m,root->left);
        m[root->val]++;
        inorder(m,root->right);
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}   