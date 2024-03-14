class Solution
{
public:
    int minimumLength(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right && s[left] == s[right])
        {
            char c = s[left];

            while (left < right && s[left] == c)
                left++;
            while (left <= right && s[right] == c) // <= instead of < for test cases like 'aa'
                right--;
        }

        return right - left + 1;
    }
};
