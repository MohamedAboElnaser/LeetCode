#include <bits/stdc++.h>
using namespace std;

class Solution {//
public:
    vector<int> findAnagrams(string s, string p) {
         int s_size=s.size(),p_size=p.size();
         if(p_size> s_size)return{};

        vector<int>ans;
        vector<int>freq_p(26,0);
        vector<int>supstr(26,0);

        for(int i=0;i<p_size;i++){
            freq_p[p[i]-'a']++;
            supstr[s[i]-'a']++;
        }
        if(freq_p==supstr) ans.push_back(0);

        for(int i=p_size;i<s_size;i++){
            supstr[s[i-p_size]-'a']--;
            supstr[s[i]-'a']++;

            if(supstr==freq_p) ans.push_back(i-p_size+1);//+1 because i start from indx 1 
        }
        return ans;
    }
};

int main(){
      
     
    return 0;

}