class Solution {
public:
    string convert(string s, int numRows) {
        //base case 
        if(numRows == 1 || s.length()<=numRows) return s;


        vector<string> rows(numRows);

        int currentrow = 0;
        int direction = 1;

        for(char c:s){
            rows[currentrow] += c;

            if(currentrow == 0){
                direction =1;
            }
            else if(currentrow== numRows-1){
                direction =-1;
            }

            currentrow += direction;
        }

        string ans;

        for(string row:rows){
            ans+=row;
        }
        return ans;
    }
};