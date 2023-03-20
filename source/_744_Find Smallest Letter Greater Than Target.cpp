#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int l = 0, r = letters.size() - 1, mid;
        char ans = letters[0];
        if (target >= letters[r])
            return ans;

        while (l < r)
        {
            mid = l + (r - l) / 2;
            if (letters[mid] == target || letters[mid] < target)
            {
                l = mid + 1;
                ans = letters[l];
            }
            else
            {
                r = mid;
                ans = letters[mid];
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
    vector<char> let{'c', 'f', 'j'};
    Solution s;
    char an = s.nextGreatestLetter(let, 'z');
    cout << an;
    return 0;
}