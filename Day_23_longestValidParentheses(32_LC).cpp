class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<char> charStack;
        stack<int> indexStack;
        indexStack.push(-1);

        int maxValue = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                charStack.push('(');
                indexStack.push(i);
            }
            else // closing bracket
            {
                if (!charStack.empty() && charStack.top() == '(')
                {
                    charStack.pop();
                    indexStack.pop();
                    maxValue = max(maxValue, i - indexStack.top());
                }
                else
                    indexStack.push(i);
            }
        }

        return maxValue;
    }
};
