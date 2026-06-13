class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> t;
        vector<int> res(2);
        
        for(int i = 0; i < numbers.size(); i++) 
        {
            if(t.count(numbers[i]))
            {
                res[0] = t[numbers[i]];
                res[1] = i + 1;
                return res;
            }
            else
            {
                t[target - numbers[i]] = i + 1;
            }
        }
        return {0};
    }
};