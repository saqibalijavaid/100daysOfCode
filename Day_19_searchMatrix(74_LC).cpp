class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int matrixSize = matrix.size();
        int matrixColSize = matrix[0].size();
        
        for (int i = 0; i < matrixSize; i++)
            for (int j = 0; j < matrixColSize; j++)
                if (matrix[i][j] == target)
                    return true;
        return false;
    }
};
