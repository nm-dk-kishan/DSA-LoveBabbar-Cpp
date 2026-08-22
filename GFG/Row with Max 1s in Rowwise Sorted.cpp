class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxrow = -1;
        int maxcount = 0;
        int count =0;
        
        int row = arr.size();
        
        int col = arr[0].size();
        
        for(int i =0;i<row;i++){
            for(int j =0 ;j<col;j++){
                if(arr[i][j] == 1){
                    count++;
                }
            }
            if(maxcount < count){
                maxrow = i;
                maxcount = count;
                
            }
            count = 0;
        }
        
        return maxrow;
    }
};