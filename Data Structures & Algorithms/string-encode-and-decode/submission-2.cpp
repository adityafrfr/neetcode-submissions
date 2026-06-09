class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for (string s : strs)   {
            encoded.append(to_string(s.length()));
            encoded.append("#");
            encoded.append(s);
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        size_t i = 0;
        while(i < s.size()) {
            size_t hash_pos = s.find("#", i);
            int length = stoi(s.substr(i, hash_pos - i));
            decoded.push_back(s.substr(hash_pos + 1, length));
            i = hash_pos + 1 + length;
        }

        return decoded;
    }
};
