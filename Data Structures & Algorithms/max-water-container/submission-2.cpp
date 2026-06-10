class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int left = 0;
        int right = size - 1;
        int max = 0;

        while (left < right) {
            int area = (right - left) *
                       (heights[left] < heights[right] ? heights[left++] : heights[right--]);

            max = area > max ? area : max;
        }

        return max;
    }
};
