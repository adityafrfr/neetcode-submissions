class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded;

        for (auto& it : strs) {
            encoded += to_string(it.size());
            encoded += '#';
            encoded += it;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        size_t i = 0;
        vector<string> decoded;

        while (i < s.size()) {
            size_t j = s.find("#", i);

            int length = std::stoi(s.substr(i, j - i));

            decoded.push_back(s.substr(j + 1, length));

            i = j + 1 + length;      
        }

        return decoded;
    }
};
