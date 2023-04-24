#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i:stones)
            q.push(i);
            
        while(q.size()>1){
            int y=q.top();
            q.pop();
            int x=q.top();
            q.pop();
            if(x!=y)
                q.push(y-x);
        }
        if(q.empty())return 0;
        return q.top();
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}