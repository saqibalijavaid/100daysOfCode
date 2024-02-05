class Solution
{
public:
    int countDigits(int num)
    {
        int count = 0;
        int dup = num;

        while (dup / 10 >= 0)
        {
            int modulo = dup % 10;
            dup = dup / 10;

            if (num % modulo == 0)
                count++;

            if (dup == 0) // This condition is necessary for last turn of loop
                break;
        }
        return count;
    }
};
