// Number of Senior Citizens

class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int vectorSize = details.size();
        int count = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            int temp1 = details[i][11]; // ASCII VALUES
            int temp2 = details[i][12]; // ASCII VALUES
            int temp = ((temp1 - 48) * 10) + (temp2 - 48);
            // Convert Ascii to decimal and then add the digits present at 11th and 12th index

            if (temp > 60)
                count++;
        }

        return count;
    }
};
