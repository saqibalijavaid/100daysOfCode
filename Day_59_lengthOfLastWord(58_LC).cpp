class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        // reverse loop
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                if (count > 0) // when there is a space on the left side of last word so it's time to terminate the loop
                    break;

                continue; // if there are spaces present on the right side of last word just continue the loop (in this case count is Zero)
            }

            else
                count++;
        }

        return count;
    }
};
