class Solution {
public:
    string encode(vector<string>& strs) {
        string result;
        for (size_t i = 0; i < strs.size() ; i++)
        {
            result += to_string(strs[i].size());
            result += "#";
            result += strs[i];
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string tmp;
        for(size_t i = 0; i < s.size(); i++)
        {
            size_t pos = s.find("#", i);
            int len = stoi(s.substr(i, pos - i));
            result.push_back(s.substr(pos + 1, len));
            i = pos + len;
        }
        return result;
    }
};
