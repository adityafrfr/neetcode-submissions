class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int left = 0;
        int right = size - 1;

        while (left < right)    {
            while (left < right && !isalnum(s[left]))    {
                left++;
            }
            while (left < right && !isalnum(s[right]))    {
                right--;
            }

            if ((char)tolower(s[left]) != (char)tolower(s[right]))  {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
