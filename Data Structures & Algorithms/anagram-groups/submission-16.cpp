class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> str_vec;
        unordered_map<string , vector<string>> maps;
        for (size_t i= 0 ; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(), key.end());
            maps[key].push_back(strs[i]);

        }
        for (auto i : maps)
        {
            str_vec.push_back(i.second);
        }
        return str_vec;
    }
    };