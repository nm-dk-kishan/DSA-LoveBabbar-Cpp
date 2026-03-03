class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int n = s.length();
        int start = 0;
        int end = n-1;

        while(start < end){
            if(!isVowel(s[start])) {
                start++;
            }
            else if(!isVowel(s[end])){
                end--;
            }
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }  
        }
        return s;
    }
};