#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
          int siz=arr.size();  
        for(int i=0;i<siz-1;i++){
            for(int j=i+1;j<siz;j++)
                if(arr[i]==2*arr[j]|| arr[j]==2*arr[i])return true;
                
        }
        return false;
    }
};
int main(){
    
    return 0;
}