class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i=0; i< (int) nums.size();i++)
        {
            for(int j=0; j< (int) nums.size();j++)
            {
                if(i!=j&&nums[i]==nums[j])
                return true;
            }
        }
        return false;
    }
};