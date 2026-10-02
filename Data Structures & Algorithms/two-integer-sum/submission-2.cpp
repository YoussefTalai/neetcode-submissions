#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for (size_t i =0; i < nums.size() ; i++)
        {
            for (size_t j =0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
                
            }
        }
    }
};
