class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int& i : nums)
        {
            freq[i]++;
        }

        vector<pair<int,int>> sorted;

        for (auto &x:freq)
        {
            sorted.push_back({x.second ,x.first});
        }

        sort(sorted.rbegin(), sorted.rend());
        vector<int>ans;
        for (int i = 0;i < k;i++)
        {
            ans.push_back(sorted[i].second);
        }
        return ans;
    }
};
