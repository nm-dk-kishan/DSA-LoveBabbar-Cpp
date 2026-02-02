class Solution {
public:
    int numberOfMatches(int n) {

        

        // return n-1;

        //OR

        int Matched = 0;
        while(n > 1){
            if(n%2 == 0){
                Matched = Matched + n/2;
                n = n/2;
            }
            else{
                Matched = Matched + (n-1)/2;
                n = (n-1)/2+1;
            }
        }
        return Matched;
    }
};