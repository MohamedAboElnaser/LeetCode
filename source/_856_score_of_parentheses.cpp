#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int scoreOfParentheses(string s) {
     stack<int> st;
     st.push(0);
        int siz=s.size();
     for(int i=0;i<siz;i++){
        char ch=s[i];

        if(ch=='(') st.push(0);
        else{
            int lastScore=st.top();
            st.pop();

            if(lastScore==0)  // case: ()
                lastScore=1;
            else 
                lastScore*=2;  // case (())

            int sum=st.top()+lastScore;
            st.pop();
            st.push(sum);
        }
     }
     return st.top();   
    }
};
int main(){
    
    return 0;
}