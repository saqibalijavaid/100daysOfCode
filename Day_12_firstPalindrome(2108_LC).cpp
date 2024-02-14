class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        int noOfWords = words.size();

        for (int i = 0; i < noOfWords; i++)
        {
            string temp = words[i];            // Make duplicate of each string in vector
            reverse(temp.begin(), temp.end()); // reverse the duplicate
            if (words[i] == temp)              // if duplicate is same as string, return the string
            {
                return temp;
            }
        }

        return {}; // if no palindrome string found
    }
};
