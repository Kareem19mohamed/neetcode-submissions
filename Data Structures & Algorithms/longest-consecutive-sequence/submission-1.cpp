class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        vector<int>trace;
        sort(nums.begin(), nums.end());
        auto it_end=unique(nums.begin(), nums.end());

        for ( auto it=nums.begin();it != it_end;it++)
        {
            if (*(it) + 1 == *(it+1))
            {
                count++;
            }
            else
            {
                trace.push_back(count);
                count = 1;
            }
        }
        auto big =  max_element(trace.begin(), trace.end()) ;
        return (!trace.empty()) ? *big:0 ;
    }
};