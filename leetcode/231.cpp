#include <cmath>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        //1.
        // for(int i = 0; i <= 30; i++){
        //     int ans = pow(2,i);

        //     if(ans == n){
        //         return true;
        //     }
        // }
        // return false;

        //2.
        if(n<=0){
            return false;
        }
        double x = log10(n)/log10(2);
        return x == (int) x;
        }
};