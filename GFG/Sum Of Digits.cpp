class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int sum = 0;
        while(n>0){
            
            int m = n % 10;
            sum = sum + m;
            n = n/10;
            
            
        }
        return sum;
    }
};