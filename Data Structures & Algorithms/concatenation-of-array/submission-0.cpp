class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s = nums.size();
        vector<int> sol(2 * s);

        for (int i = 0; i < s; ++i) {
            sol[i] = sol[i + s] = nums[i];
        }

        return sol;
    }
};