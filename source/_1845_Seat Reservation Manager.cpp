#include <bits/stdc++.h>
using namespace std;

class SeatManager {
private: 
priority_queue<int, vector<int>, greater<int>>q;
public:

    SeatManager(int n) {
    
    for(int i=1;i<=n;i++) q.push(i);
    }
    
    int reserve() {
        int ans=q.top();
        q.pop();
        return ans;

    }
    
    void unreserve(int seatNumber) {
       q.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}