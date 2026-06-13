class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> found;
        vector<int>sum(2);
        for (int i = 0; i < nums.size();i++)
        {
            int diff = target - nums[i];
            if (found.count(nums[i]))
            {
                sum[0] = found[nums[i]];
                sum[1] = i;
                return sum;
            }
            else
            {
                found[diff] = i;
            }
        }
        return { 0 };
    }
};
