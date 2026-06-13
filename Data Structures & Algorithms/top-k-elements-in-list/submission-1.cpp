class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for (int i : nums)
        {
            freq[i]++;
        }

        vector<vector<int>>bucket(nums.size() + 1);

        for (auto s : freq)
        {
            bucket[s.second].push_back(s.first);
        }

        vector<int>ans;

        for (int i = bucket.size() - 1;i > 0;i--)
        {
            for (int i : bucket[i])
            {
                ans.push_back(i);
                if (ans.size() == k)return ans;
            }
        }
        return ans;
    }
};
