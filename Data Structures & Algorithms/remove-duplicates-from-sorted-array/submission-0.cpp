class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if (size < 2) return size;
        int left = 0;

        for (int right = 1; right < size; ++right) {

            if (nums[left] != nums[right]) {
                nums[++left] = nums[right];
            }
        }

        return left + 1;
    }
};