#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
       map<char,int> m;
       vector<string> ans;
       m['q']=1;m['w']=1;m['e']=1;m['r']=1;m['t']=1;m['y']=1;m['u']=1;m['i']=1;m['o']=1;m['p']=1;
       m['a']=2;m['s']=2;m['d']=2;m['f']=2;m['g']=2;m['h']=2;m['j']=2;m['k']=2;m['l']=2;
       m['z']=3;m['x']=3;m['c']=3;m['v']=3;m['b']=3;m['n']=3;m['m']=3;
       
       int wordsSiz=words.size();
       for(int i=0;i<wordsSiz;i++){
            string temp=words[i];
            int tempSiz=temp.size();
                char c=getLowercase(temp[0]);
                bool is_valid_word=true;
            for(int j=1;j<tempSiz;j++){
                if(m[getLowercase(temp[j])]!=m[c]){
                    is_valid_word=false;
                    j=tempSiz;
                }
            }
            if(is_valid_word)ans.push_back(temp);
       }
       return ans;
    }
    char getLowercase(char x){
        if(islower(x)) return x;
        else return (char)(x+32);
    }
}; 
int main(){
    Solution s;
    vector<string> words{"adsdf","sfd"};
    vector<string>ans=s.findWords(words);
    for(auto &i: ans)cout<<i<<" ";
    return 0;
}