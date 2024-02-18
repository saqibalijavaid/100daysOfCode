// First: Find Transpose
// Second: Reverse Rows

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int noOfRows = matrix.size();
        // int noOfCols = matrix[0].size();

        for (int i = 0; i < noOfRows; i++)
        {
            for (int j = 0; j < noOfRows; j++)
                if (i <= j) // Transpose of Matrix
                    swap(matrix[i][j], matrix[j][i]);

            for (int j = 0; j < noOfRows; j++)
                if (j < noOfRows / 2) // Reverse rows of Matrix
                    swap(matrix[i][j], matrix[i][noOfRows - 1 - j]);
        }
    }
};
