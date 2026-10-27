class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int s = 0;
        int o = n;
        
        while(n>0){
            
            int m = n % 10;
            s = s+ (m*m*m);
            n = n/10;
        }
        
        
        return o == s;
    }
};