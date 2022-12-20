#include <bits/stdc++.h>
//             ========================not an easy one:)========================
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens){
        if(tokens.size()==1) return nummericalValu(tokens[0]);
        else{
            stack<  long long> s;
            long long val1,val2;
              long long temp;
            char op;
              long long siz=tokens.size();
            for(int i=0;i<siz;i++){
                if(is_number(tokens[i])){
                    s.push(nummericalValu(tokens[i]));
                }else{
                  op=tokens[i].at(0);
                  val2=s.top(); s.pop();
                  val1=s.top(); s.pop();
                  temp=eval(op,val1,val2);
                  s.push(temp);
                }
            }
            return s.top();
        }     
    }
    bool is_number(string s){
        if(s=="+" || s=="*" || s=="/" || s=="-") 
            return false;
        else 
            return true;
    }
      long long nummericalValu(string s){
          long long n=0;
          long long len=s.length();
        if(s[0]!='-')
        {
        for(int i=0;i<len ;i++)
            n+=((s[i]-'0')*pow(10,len-i-1));
            return n;
        
        }
        else{
          
          for(int i=1;i<len ;i++)
            n+=((s[i]-'0')*pow(10,len-i-1)); 
            return -n; 
        }
        
    }
    int eval(char op,  long long val1,  long long val2)
    {
        if(op=='+') return val1+val2;
        else if(op=='-') return val1-val2;
        else if(op=='*') return val1*val2;
        else return val1/val2;
    }
};
int main(){
    vector<string>tokesn{"-128","-128","*","-128","*","-128","*","8","*","-1","*"};
    Solution s;
    cout<<s.evalRPN(tokesn);
  
    return 0;
}