class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int first = 0;
        int second = arr.size()-1;
        
        while(first < second){
            swap(arr[first],arr[second]);
            first++;
            second--;
        }
        
        //or
        
        // return reverse(arr.begin(),arr.end());
    }
};