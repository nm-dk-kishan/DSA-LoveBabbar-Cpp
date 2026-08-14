class Solution {
public:
    bool isPalindrome(int num) {
        int original = num;
        int rev = 0;

        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }

        return original == rev;
    }

    bool isPalinArray(vector<int> &arr) {
        for (int num : arr) {
            if (!isPalindrome(num)) {
                return false;
            }
        }

        return true;
    }
};