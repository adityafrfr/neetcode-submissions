class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> returnVal;
        
        for (int i = 0; i < strs.size(); i++)   {
            string s = strs[i];
            sort(s.begin(), s.end());

            returnVal[s].push_back(strs[i]);
        }

        vector<vector<string>> final;
        for (auto &key : returnVal) {
            final.push_back(key.second);
        }

        return final;

    }
};
