class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      int n = arr.size();
        vector<bool> visited(n, false);
        vector<int> counts;

        // Step 1: Count occurrences
        for (int i = 0; i < arr.size(); i++) {
            if (visited[i]) continue;

            int count = 1;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = true;
                }
            }
            counts.push_back(count);
        }

        // Step 2: Check if counts are unique
        for (int i = 0; i < counts.size(); i++) {
            for (int j = i + 1; j < counts.size(); j++) {
                if (counts[i] == counts[j]) {
                    return false; // duplicate frequency found
                }
            }
        }
        return true; 
    }
};
