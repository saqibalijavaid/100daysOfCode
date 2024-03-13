class Solution
{
public:

    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> intersection;
        int idA = 0, idB = 0;

        while (idA < nums1.size() && idB < nums2.size())
        {
            if (nums1[idA] < nums2[idB])
                idA++;
            else if (nums2[idB] < nums1[idA])
                idB++;
            else // => A[idA] = B[idB], we have a common element
            {
                intersection.push_back(nums1[idA]);
                idA++;
                idB++;
            }
        }

        return intersection;
    }

    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        /* Approach
        -> Find min element of each row and put it in minRow
        -> Find max element of each col and put it in maxCol

        -> Return common elements in both arrays
        */

        vector<int> ans;
        vector<int> minRow;
        vector<int> maxCol;

        // min element of each row
        for (int i = 0; i < matrix.size(); i++)
        {
            int minInRow = matrix[i][0];
            for (int j = 0; j < matrix[0].size(); j++)
                if (matrix[i][j] < minInRow)
                    minInRow = matrix[i][j];

            minRow.push_back(minInRow);
        }

        // max element of each col
        for (int i = 0; i < matrix[0].size(); i++) // i-> cols
        {
            int maxInCol = matrix[0][i];
            for (int j = 0; j < matrix.size(); j++) // j->rows
                if (matrix[j][i] > maxInCol)
                    maxInCol = matrix[j][i];

            maxCol.push_back(maxInCol);
        }

        // INTERSECTION of minRow & maxCol
        return intersection(minRow,maxCol);

    }
};
