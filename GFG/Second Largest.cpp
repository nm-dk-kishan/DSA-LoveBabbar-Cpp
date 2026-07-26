class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2)
            return -1;

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int x : arr) {
            if (x > largest) {
                secondLargest = largest;
                largest = x;
            }
            else if (x > secondLargest && x != largest) {
                secondLargest = x;
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};