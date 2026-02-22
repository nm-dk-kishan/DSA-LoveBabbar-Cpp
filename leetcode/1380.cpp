class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        
        vector<int> store;
        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i = 0; i<rows;i++){

            int minVal = matrix[i][0];
            int colIndex =0;
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] < minVal) {
                    minVal = matrix[i][j];
                    colIndex = j;
                }
            }

            bool isLucky = true;

            for (int k = 0; k < rows; k++) {
                if (matrix[k][colIndex] > minVal) {
                    isLucky = false;
                    break;
                }
            }

            if (isLucky)
                store.push_back(minVal);
        }

        return store;
    }
};