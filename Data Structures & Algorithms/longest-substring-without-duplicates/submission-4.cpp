class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0,longest=0;
        unordered_set<char>seen;
        for (int r = 0;r < s.length();r++)
        {
            while (seen.count(s[r]))
            {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            longest = max(longest, r - l + 1);
        }
        return longest;
    }
};