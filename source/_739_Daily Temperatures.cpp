#include <bits/stdc++.h>
using namespace std;

 class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int siz=t.size();
        stack<int>st;
        vector<int>ans(siz,0);

        for(int i=0;i<siz;i++){
            if(st.empty()) st.push(i);
            else{
                while(!st.empty()&& t[i]>t[st.top()]){
                    ans[st.top()]=i-st.top();
                    st.pop();
                }
                st.push(i);
            }
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