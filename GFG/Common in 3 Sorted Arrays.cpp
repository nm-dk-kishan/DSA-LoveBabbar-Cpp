class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        
        vector<int> ans;
        int x=0,y=0,z=0;
        
        while(x<a.size() && y<b.size() && z<c.size()){
            if(a[x] == b[y] && b[y] == c[z]){
                if(ans.empty() || ans.back()!= b[y]){
                    ans.push_back(c[z]);
                }
                x++;
                y++;
                z++;
            }
            else if(a[x] < b[y]){
                x++;
            }
            else if(b[y]<c[z]){
                y++;
            }
            else{
                z++;
            }
        }
        return ans;
    }
};