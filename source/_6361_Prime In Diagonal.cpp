#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int siz=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<siz;i++){
            if(is_prime(nums[i][i])) ans=max(ans ,nums[i][i]);
            
        }
        for(int i=0;i<siz;i++){
            if(is_prime(nums[i][siz-i-1]) )ans=max(ans ,nums[i][siz-i-1]);
        }
            if(ans==INT_MIN)
               return 0;
            return ans;
    }
    bool is_prime(long long n)
    {
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    return 0;
}   