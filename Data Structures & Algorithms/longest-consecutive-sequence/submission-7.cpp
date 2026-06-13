class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> digits(nums.begin(), nums.end());
        int longest=0;
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
            longest=max(longest,streak);
        }
        return longest;
    }
};
