class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre;
        vector<int>suf;
        vector<int>result;
        int product=1;
        pre.push_back(1);
        suf.push_back(1);
        for (int& i :nums)
        {
            pre.push_back(product * i);
            product *= i;
        }

        int reverse_product=1;
        for (auto it = nums.rbegin(); it != nums.rend()-1; it++) {
            suf.push_back(reverse_product * (*it));
            reverse_product *= *it;
        }

        for (int i = 0;i < nums.size();i++)
        {
            result.push_back(pre[i] * suf[nums.size() - 1 - i]);
        }
        return result;
    }
};
