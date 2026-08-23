class Solution {
  public:
    vector<vector<int>> sortedMatrix(vector<vector<int>> mat) {
        // code here
        
        // vector<vector<int>> m;
        vector<int> a;
        
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                a.push_back(mat[i][j]);
            }
        }
        
        sort(a.begin(),a.end());
        
        int k =0;
        
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                mat[i][j] = a[k++];
            }
        }
        
        return mat;
        
    }
};