class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;

        while(left < right){
            int h = min(height[left], height[right]);
            int width = right - left;
            maxarea = max(maxarea, h * width);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};