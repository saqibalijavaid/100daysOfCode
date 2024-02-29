class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int flag = 0; // count no. of spaces
        int index = 0; // count the no of index's till which we need to return string

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                flag++;
            if (flag == k)
                break;
            index++;
        }

        if (flag == 0) // no space (i.e. only one word)
            return s;
        return s.substr(0, index);
    }
};
