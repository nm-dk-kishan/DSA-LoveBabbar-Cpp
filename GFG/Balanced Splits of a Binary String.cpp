class Solution {
  public:
    int maxSubStr(string &s) {
        // code here
        int count =0;
        int count1 =0;
        int count0 =0;
        
        for(int i =0;i<s.length();i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            
            if(count0 == count1){
                count++;
            }
        }
        
        if(count0 != count1){
            return -1;
        }
        
        return count;
    }
};
