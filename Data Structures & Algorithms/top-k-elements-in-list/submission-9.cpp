class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> my_map;
        priority_queue<pair<int , int>> my_pq;
        vector<int> result;
        for (int i =0; i < nums.size(); i++) my_map[nums[i]]++;
        for (auto i : my_map)   my_pq.push({i.second, i.first});
        for (int i = k ; i > 0; i--)
        {
            result.push_back(my_pq.top().second);
            my_pq.pop();
        }
        return result;
            
    }
};