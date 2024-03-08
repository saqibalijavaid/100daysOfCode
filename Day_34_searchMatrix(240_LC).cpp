class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // Not in Real but imaginary, we are converting 2d array to 1d array
        // e.g
        // [00 01]
        // [10 11]
        // will be like
        // [0   1]
        // [2   3]
        // i.e. one D indexing [0,1,2,3] // we have flattend 2d rows inna single row

        int m = matrix.size();
        int n = matrix[0].size();
        int oneDIndexing = (m * n) - 1; // if rows are 4, indexing 0 to 15

        for (int i = 0; i <= oneDIndexing; i++)
        {
            int row = i / n; // divisio & modulus by no of columns
            int col = i % n;

            if (matrix[row][col] == target)
                return true;
        }

        return false;
    }
};
