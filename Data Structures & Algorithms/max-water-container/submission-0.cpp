class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max = -1;

        while (left < right) {
            int area = (right - left) * (heights[left] < heights[right] ? heights[left++] : heights[right--]);

            if (area > max) max = area;
        }

        return max;
    }
};
