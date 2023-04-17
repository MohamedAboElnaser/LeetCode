#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        int max_candies=-1;
        vector<bool>ans;
        for(auto i: candies)
            max_candies=max(max_candies,i);
        
        for(int i=0;i<candies.size();i++){
            if((candies[i]+e)>=max_candies){
                ans.push_back(true);
                
            }
            else ans.push_back(false);
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