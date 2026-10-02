
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> my_map;
        priority_queue<pair<int , int>> my_pq;
        vector<int> result; 
        for (size_t i =0; i < nums.size() ; i++)
            my_map[nums[i]]++;
        for (auto it : my_map)
            my_pq.push({it.second, it.first});
        for (size_t i = k; i > 0; i--)
        {
            result.push_back(my_pq.top().second);
            my_pq.pop();
        }
        return result;
    }
};