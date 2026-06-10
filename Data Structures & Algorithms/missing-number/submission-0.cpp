class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int req = 0, act = 0;

        for (int i = 0; i < nums.size(); i++)   {
            req += i+1;
            act += nums[i];
        }

        return req - act;
    }
};
