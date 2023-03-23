#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> ans;
        int j = 0, i = numbers.size() - 1;
        while (j < i)
        {
            int s = numbers[i] + numbers[j];
            if (s == target)
            {
                ans.push_back(j + 1);
                ans.push_back(i + 1);
                break;
            }
            else if (s > target)
            {
                i--;
            }
            else
                j++;
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