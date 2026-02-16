class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int size = encoded.size();
        vector<int> arr;

        arr.push_back(first);

        for(int i = 0; i<size;i++){
            arr.push_back(encoded[i] ^ arr[i]);
        }
        return arr;


    }
};