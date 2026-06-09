class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int prefix[size];
        int postfix[size];

        prefix[0] = postfix[size - 1] = 1;

        for (int i = 1; i < size; ++i)  {
            prefix[i] = prefix[i - 1] * nums[i - 1];
            postfix[size - 1 - i] = postfix[size - i] * nums[size - i];
        }

        vector<int> result;
        for (int i = 0; i < size; ++i)  {
            result.push_back(prefix[i] * postfix[i]);
        }
        return result;
    }
};
