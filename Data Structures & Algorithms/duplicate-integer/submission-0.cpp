class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (size_t i = 0; i < nums.size() ; i++)
        {
            for(size_t j = 0; j < nums.size(); j++)
            {
                if (nums[i] ==  nums[j] && i != j)
                    return true;
            }
        }
        return false;
    }
};