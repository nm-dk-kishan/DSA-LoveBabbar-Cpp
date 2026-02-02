class Solution {
public:
    int totalMoney(int n) {

        int total = 0;
        int weekStart = 1;

        for(int day = 1; day <= n;day++){
            int dayweek = (day-1) % 7;
            total = total + weekStart + dayweek;

            if(day % 7 == 0){
                weekStart++;
            }

        }

        return total;
        
    }
};