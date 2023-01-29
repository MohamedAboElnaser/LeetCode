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
    int arrangeCoins(int n) {
         int c=0,s=0;
         for(int i=1;i<=n;i++){
            s+=i;
            if(s>n)break;
            c++;
         }return c;
    }
}; 
int main(){
     Solution s;
     cout<<s.arrangeCoins(8);

    return 0;

}