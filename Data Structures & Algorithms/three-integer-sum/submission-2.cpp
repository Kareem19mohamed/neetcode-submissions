class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        int i = 0;
        int l = i + 1;
        int r = nums.size() - 1;
        vector<vector<int>>arr;
        set<vector<int>>seen;

        while (nums[i] <= 0){
                while (l < r)
                {
                    int low = nums[l];
                    int high = nums[r];
        
                    if (seen.count({ nums[i],low,high }))
                    {
                        l++;
                        r--;
                        continue;
                    }

                    if (low + high + nums[i] == 0)
                    {
                        seen.insert({ nums[i],low,high });
                        arr.push_back({ nums[i],low,high });
                        l++;
                        r--;
                    }
                    else if (low + high + nums[i] > 0)
                    {
                        r--;
                    }
                    else
                        l++;
                }
            i++;
            l = i + 1;
            r = nums.size() - 1;
        }
        return arr;
    }
};