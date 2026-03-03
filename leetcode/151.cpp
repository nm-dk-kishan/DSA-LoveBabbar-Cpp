class Solution {
public:
    void reverse(string &s,int l,int r){
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }

    string reverseWords(string s) {
        int n = s.length();

        //step 1
        reverse(s,0,n-1);

        int start = 0;
        int end = 0;
        //step 2
        while(start < n){
            while(start<n && s[start] == ' ') start++;
            if(start > n) break;

            end = start;
            while(end<n && s[end] != ' ') end++;
            reverse(s,start,end-1);
            start=end;
        }

        // step 3
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                ans += s[i];
            }
            else if(!ans.empty() && ans.back() != ' '){
                ans += ' ';
            }
        }

        if(!ans.empty() && ans.back() == ' '){
            ans.pop_back();
        }
        return ans;

    }
};