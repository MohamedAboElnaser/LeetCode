#include <bits/stdc++.h>
using namespace std;

 class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int ptr=0;
        stack<int>s;

        for(auto &i: pushed){
            s.push(i);
            while(!s.empty() && s.top()==popped[ptr]){
                s.pop();
                ptr++;
            }
        }
        return s.empty();
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}