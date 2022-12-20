#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      stack<int> ans; 

      for(int i=0;i<asteroids.size();i++){
        int curr_asteroid=asteroids[i];
        bool is_explod=false;

        while(!ans.empty() && curr_asteroid<0 && ans.top()>=0){

            if(ans.top()< -curr_asteroid){ // the top will explode then go back to see if the curr_asteroids wil eplode any thing else
                ans.pop();continue;
            }
            else if(ans.top()==-curr_asteroid)// both will explode then break and get the next curr_asteroids
                ans.pop();
            is_explod=true;
            break;
        }
        if(!is_explod)   // if the curr_asteroid does not explod add it to the stack
            ans.push(curr_asteroid);

      }
      vector<int> res;
      while(!ans.empty()){
        res.push_back(ans.top());
        ans.pop();
      }
      reverse(res.begin(),res.end());
      return res;
    }
};
int main(){
    vector <int> a{1, 0, -1, 1};
    Solution s;
    vector <int>an=s.asteroidCollision(a);
    for(auto i: an)cout<<i<<" ";
    return 0;
}