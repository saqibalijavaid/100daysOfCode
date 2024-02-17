class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<vector<int>> answer = matrix;

        for (int i = 0; i < cols; i++)
        {
            int max = INT_MIN;
            for (int j = 0; j < rows; j++)
                if (matrix[j][i] > max)
                    max = matrix[j][i];

            for (int j = 0; j < rows; j++)
                if (matrix[j][i] == -1)
                    answer[j][i] = max;
        }

        return answer;
    }
};

// In C++, 2D vectors are accessed in the form matrix[row][col], and cannot be accessed as matrix[col][row].
// if we want to access like this matrix[col][row]. we need to make outer loop as col and inner loop as row
