class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // unordered_map<char,int> mp;

        // for(char m : magazine){
        //     mp[m]++;
        // }

        // for(char m : ransomNote){
        //     mp[m]--;

        //     if(mp[m]<0){
        //         return false;
        //     }
        // }
        // return true;

        //or


        int count[26] = {0};

        for(char c : magazine){
            count[c - 'a']++;
        }

        for(char c : ransomNote){
            count[c - 'a']--;

            if(count[c - 'a'] < 0)
                return false;
        };

        return true;
    }
};