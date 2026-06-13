class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int a = 0;
        int l = 0;
        int r = matrix[0].size()-1;
        while ( matrix[a][r]<target && a<matrix.size()-1)
        {
            a++;
        }
        
        while (l <= r)
        {
            int mid = (l + r ) / 2;
            if (matrix[a][mid] == target)
                return true;

            if (target <= matrix[a][mid])
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
    return false;
    }
};