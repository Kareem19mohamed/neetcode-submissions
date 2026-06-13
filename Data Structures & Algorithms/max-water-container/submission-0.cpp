class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int max = 0;
        while (r > l)
        {
            if (heights[l] >= heights[r])
            {
                if (max < heights[r] * (r-l))
                {
                    max = heights[r] * (r - l);
                }
                r--;
            }
            else if (heights[l] < heights[r])
            {
                if (max < heights[l] * (r-l))
                {
                    max = heights[l] * (r - l);
                }
                l++;
            }
        }
            return max;
    }
};
