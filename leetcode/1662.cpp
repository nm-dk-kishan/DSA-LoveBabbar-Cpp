class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 ="";
        string s2 ="";
        for(string &w : word1){
            s1 += w;
        }
        for(string &w : word2){
            s2 += w;
        }
        if(s1 == s2) return true;
        return false;
        
    }
};