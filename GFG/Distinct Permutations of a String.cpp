class Solution {
  public:
    void combinations(string &s, int index, vector<string>& ans) {
        if (s.length() == index) {
            ans.push_back(s);
            return ;
        }
        
        set<char> used;

        for (int i = index; i < s.length(); i++) {
            
            if (used.count(s[i]))
                continue;

            used.insert(s[i]);
            
            swap(s[index],s[i]);
            
            combinations(s
            
            ,index+1,ans);
            
            swap(s[index],s[i]);
        }
    }
  
    vector<string> findPermutation(string &s) {
        // Code here
        
        vector<string> ans;
        
        combinations(s,0,ans);
        
        return ans;
        
    }
};
