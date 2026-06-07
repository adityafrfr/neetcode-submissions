class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;

        for (auto& it : nums) {
            hmap[it]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for (auto& it : hmap) {
            buckets[it.second].push_back(it.first);
        }

        vector<int> soln;

        for (int i = buckets.size() - 1; i >= 0; --i) {
            if (buckets[i].empty()) continue;

            for (int num : buckets[i]) {
                if (soln.size() == k) return soln;
                soln.push_back(num);
            }
        }

        return soln;
    }
};
