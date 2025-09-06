class Solution {
public:
    bool isPerfectSquare(int num) {
        long long s = 1,e = num;
        while(s<=e){
            long long mid = s + (e-s)/2;
            long long square = mid*mid;
            if(square == num){
                return true;
            }
            else if(square > num){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return false;
    }
};