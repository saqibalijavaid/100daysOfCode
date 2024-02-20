class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        // a) Considering the last digit is not 9.
        // b) Considering all the values are 9.
        // c) Considering the last digit is 9.

        int size = digits.size();

        // if last element of array != 9
        if ((digits[size - 1] >= 0) && (digits[size - 1] <= 8))
        {
            digits[size - 1]++;
            return digits;
        }

        // if last element of array == 9
        else if (digits[size - 1] == 9)
        {
            // check if all elements of array == 9
            int flag = -1;
            for (int i = 0; i < size; i++)
            {
                if (digits[i] != 9)
                    flag = 0;
            }

            if (flag == -1) // if all == 9
            {
                vector<int> newVector(size + 1, 0);
                newVector[0] = 1;

                return newVector;
            }

            else // if only few elements from right side == 9
            {
                for (int i = size - 1; i > 0; i--)
                {
                    if ((digits[i] == 9) && (digits[i - 1] == 9))
                    {
                        digits[i] = 0;
                    }
                    else if ((digits[i] == 9) && (digits[i - 1] != 9))
                    {
                        digits[i] = 0;
                        digits[i - 1]++;
                        break;
                    }
                }
                return digits;
            }
        }
        return digits;
    }
};
