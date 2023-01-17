#include <bits/stdc++.h>

using namespace std;
 class Solution {
public:
    bool detectCapitalUse(string word) {
        int siz=word.size();
        int l=0,u=0;
        for(int i=0;i<siz;i++){
            if(is_lower(word[i]))l++;
            else u++;
        }
        if(l==siz || (l==siz-1&& !is_lower(word[0])|| u==siz))return true;
        else return false;
    }
    bool is_lower(char c){
        if(c>='a'&&c<='z')return true;
        else return false;
    }
    
};
int main(){
    
    return 0;

}