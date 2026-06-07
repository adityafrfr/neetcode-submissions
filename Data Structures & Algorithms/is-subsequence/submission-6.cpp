class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0) return true;
        if (s.size() > t.size()) return false;
        int p = 0;

        for(int i = 0; i < t.size(); ++i)   {

            if (p < s.size() && s[p] == t[i])   {
                p++;
            }

            if (p == s.size())  {
                return true;
            }
        }
        return false;
        
    }
};