class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        int sum;
        do
        {
            sum = numbers[l] + numbers[r];
            if (sum > target)
            {
                r--;
            }
            else if (sum < target)
                l++;
            else
                break;
        } while (sum != target);
        return { l+1,r+1 };
    }
};

