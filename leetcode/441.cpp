class Solution {
public:
    int arrangeCoins(int n) {
        return (int )((sqrt(8LL * n + 1) -1)/2);
    }
};