class Solution {
  public:
    void solve(string &s, int i,string curr,vector<string> &ans){
        if(i==s.size()){
            
            ans.push_back(curr);
            
            return;
        }
        
        
        solve(s,i+1,curr,ans);
        
        solve(s,i+1,curr+s[i],ans);
    }
  
  
    vector<string> powerSet(string &s) {
        // Code here
        
        vector<string> ans;
        
        solve(s,0,"",ans);
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};