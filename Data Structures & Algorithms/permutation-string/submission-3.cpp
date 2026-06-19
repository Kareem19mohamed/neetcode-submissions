class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        vector<int> org(26);
        for (char c : s1)org[c - 'a']++;
        vector<int>freq(26);
        int l = 0 ;
        int r = 0;
        for (;r < s1.length();r++)freq[s2[r] - 'a']++;

        if (org == freq) return true;
        while (r < s2.length())
        {
            freq[s2[r] - 'a']++;
            freq[s2[l] - 'a']--;
            if (org == freq) return true;
            r++, l++;
        }
    return false;
    }
};
