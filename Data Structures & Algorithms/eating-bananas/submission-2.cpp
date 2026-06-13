class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while (l <= r)
        {
            long long hours = 0;
            int mid = (r + l+1) / 2;

            for (int& pile : piles)
            {
                hours += (pile + mid - 1) / mid;
            }


            if (hours > h)
                l = mid + 1;
            else
                r = mid - 1;

        }
        return l;
    }
};