class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int> ans;
        ans.push_back(1);
        
        for(int i=2;i<=n;i++){
            int carry=0;
            
            for(int j=0;j<ans.size();j++){
                int product = ans[j]*i+carry;
                ans[j] = product % 10;
                carry = product /10;
            }
            
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        
        
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};