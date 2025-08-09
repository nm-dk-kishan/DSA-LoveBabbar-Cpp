class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mark = 0;
        if(m==0){
            return 1;
        }
        while(m != 0){
            mark = (mark << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mark;
        return ans;
    }
};