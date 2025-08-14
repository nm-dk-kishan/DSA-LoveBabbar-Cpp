class Solution {
public:
    int sumarray(vector<int> & arr){
        int sum = 0;
        for(int i = 0; i<arr.size();i++){
            sum +=arr[i];
        }
        return sum;
    }

    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(int i =0; i < accounts.size();i++){
            int current = sumarray(accounts[i]);
            if(maxWealth < current) maxWealth =current;
        }
        return maxWealth;
    }
};