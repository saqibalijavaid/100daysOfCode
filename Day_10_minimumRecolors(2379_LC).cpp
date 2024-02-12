class Solution
{
public:
    int minimumRecolors(string s, int k)
    {
        // Sliding Window Technique
        int size = s.length();

        int i = 0, j = 0, currLength = 0;
        int count = INT_MAX;

        while (j < size)
        {
            if (s[j] == 'W')
                currLength++;

            if ((j - i + 1) < k)
                j++;

            else
            {
                count = min(count, currLength);

                if (s[i] == 'W')
                    currLength--;

                i++;
                j++;
            }
        }
        return count;
    }
};
