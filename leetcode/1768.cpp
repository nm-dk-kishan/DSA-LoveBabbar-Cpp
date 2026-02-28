class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sum;
        int n = word1.size();
        int m = word2.size();
        int maxLen = max(m,n);
        
        for(int i = 0; i<maxLen;i++){
            if(i<n) sum += word1[i];
            if(i<m) sum += word2[i]; 
        }
        return sum;
    }
};