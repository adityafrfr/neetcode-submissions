class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0) return true;
        if (s.size() > t.size()) return false;
        int p = 0;

        for(int i = 0; i < t.size() - 1; ++i)   {

            if (p < s.size() - 1 && s[p] == t[i])   {
                p++;
            }

            if (p == s.size() - 1)  {
                return true;
            }
        }
        return false;
        
    }
};