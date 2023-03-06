#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
      return   countOneBits_1(n);
    }
    int countOneBits_1(unsigned int x){ 
    int count=0;
    while(x){
        count+=(x&1);
        x>>=1;
    }
    return count;
}
};
int main(){
      
     
    return 0;

}