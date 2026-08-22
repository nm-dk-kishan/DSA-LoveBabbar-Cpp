class Solution {
public:
    int getnext(int n) {
        int sum = 0;

        while(n>0){
            int digit = n%10;
            sum = sum +  (digit*digit);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {

        int fast = getnext(n);
        int slow = n;

        while(fast!=1 && slow != fast){
            slow = getnext(n);
            fast = getnext(getnext(n));
        }
        
        return fast == 1;
        

        //or

        
        // unordered_set<int> seen;

        // while(n!=1){
        //     if(seen.count(n)){
        //         return false;
        //     }

        //     seen.insert(n);

        //     int sum =0;

        //     while(n>0){
        //         int digit = n%10;
        //         sum+=(digit*digit);

        //         n/=10;
        //     }

        //     n = sum;


        // }

        // return true;
    }
};