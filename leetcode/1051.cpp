class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        copy(heights.begin(),heights.end(),expected.begin());
        sort(expected.begin(),expected.end());

        int count= 0;
        for(int i = 0; i<=heights.size()-1;i++){
            if(heights[i] != expected[i]){
                count++;
            }
        }
        return count;
    }
};