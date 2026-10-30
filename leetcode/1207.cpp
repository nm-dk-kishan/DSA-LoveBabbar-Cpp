class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> vec(2001,0);
        for(int &x:arr){
            vec[x+1000]++;
        }
        sort(vec.begin(),vec.end());

        for(int i=0;i<2001;i++){
            if(vec[i]!=0 && vec[i] == vec[i-1]){
                return false;
            }
        }
        return true;

        //OR


        // unordered_map<int,int> mp;

        // for(auto &x:arr){
        //     mp[x]++;
        // }

        // unordered_set<int> set;

        // for(auto &s:mp){

        //     int freq = s.second;

        //     if(set.find(freq) != set.end()){
        //         return false;
        //     }
        //     set.insert(freq);
        // }

        // return true;
    }
};