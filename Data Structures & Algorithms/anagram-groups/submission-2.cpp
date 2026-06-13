class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        for (string& s : strs)
        {
                vector<int> arr(26);
            for (int i = 0;i < s.length();i++)
            {
                arr[s[i] - 'a']++;
            }

            string key = "";
            for (int i : arr)
            {
                key += "#" + to_string(i);
            }

            anagram[key].push_back(s);
             
        }
        vector<vector<string>>final;
        for (auto& x : anagram)
        {
            final.push_back(x.second);
        }
        return final ;
    }
};