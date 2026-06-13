class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        if (nums[l] < nums[r])
        {
            return nums[l];
        }
        int mid = 0;
        int lil=nums[0];
        while (l < r)
        {
           
             mid = (r + l) / 2;
             lil = min(lil, nums[mid]);
             if (nums[mid] < nums[l])
             {
                 r = mid-1;
             lil = min(lil, nums[r]);
             }
             else 
             {
                 l = mid + 1;
             lil = min(lil, nums[l]);
             }
        }
        return lil;
    }
};
