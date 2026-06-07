class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hmap;

        for (int i = 0; i < strs.size(); i++)   {
            string copy = strs[i];
            sort(copy.begin(), copy.end());

            hmap[copy].push_back(strs[i]);
        }

        vector<vector<string>> soln;

        for (auto &it : hmap)   {
            soln.push_back(it.second);
        }

        return soln;
    }
};
