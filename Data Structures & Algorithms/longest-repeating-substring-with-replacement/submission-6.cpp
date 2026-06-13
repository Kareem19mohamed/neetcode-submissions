class Solution {
public:
    int characterReplacement(string s, int k) {
        vector< int>freq(26);
        int l = 0,longest=0;
        int temp = k;
        for(int r=0;r< s.length();r++)
        {
            freq[s[r]-'A']++;
            auto sum = max_element(freq.begin(), freq.end());

            int size = (r-l+1) - *sum;
            if (size > k)
            {
                freq[s[l] - 'A']--;
                l++;
            }

            longest = max(longest, r - l + 1);
        }
        return longest;
    }
};