class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int openP = 0, closeP = 0, flag = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                openP++;
                flag++;
            }
            else if (c == ')' && flag > 0)
            {
                closeP++;
                flag--;
            }
        }

        int k = min(openP, closeP);
        openP = k;
        closeP = k;
        string ans = "";

        for (char c : s)
        {
            if (c == '(')
            {
                if (openP > 0)
                {
                    ans += '(';
                    openP--;
                }
            }
            else if (c == ')')
            {
                if (closeP > 0 && closeP > openP)
                {
                    ans += ')';
                    closeP--;
                }
            }
            else
                ans += c;
        }

        return ans;
    }
};
