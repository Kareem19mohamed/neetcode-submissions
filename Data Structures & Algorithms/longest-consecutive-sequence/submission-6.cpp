class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set digits(nums.begin(), nums.end());
        vector<int>res;
        res.push_back(0);
        for (int i : digits)
        {
            int streak = 1;
            if (!digits.count(i-1))
            {
                int temp;
                temp = i+1;
                while (digits.count(temp))
                {
                    streak++;
                    temp++;
                }
            }
            res.push_back(streak);
        }
        auto longest = max_element(res.begin(), res.end());
        return *longest;
    }
};
