#include <bits/stdc++.h>
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        queue<Node*>q;
        vector<vector<int>>ans;
        for(int i=0;i<root->children.size();i++){
            q.push(root->children[i]);
        }
        ans.push_back({root->val});
        while(!q.empty()){
            Node* temp=q.front();
            vector<int>level;
            int siz=q.size();
           for(int i=0;i<siz;i++){
               for(int j=0;j<temp->children.size();j++){
                   q.push(temp->children[j]);
               }
               level.push_back(temp->val);
                q.pop();
                temp=q.front();
           }
           ans.push_back(level);
        }
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}