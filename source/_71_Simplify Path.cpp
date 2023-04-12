#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> st;
        string ans;
        int siz = path.size();

        for (int i = 0; i < siz; i++)
        {
            if (path[i] == '/')
                continue;

            string temp = "";
            while (i < siz && path[i] != '/')
            {
                temp += path[i];
                i++;
            }

            if (temp == ".")
                continue;

            else if (temp == "..")
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
                st.push(temp);
        }
        if (st.empty())
            return "/";
        while (!st.empty())
        {
            ans = "/" + st.top() + ans;
            st.pop();
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