class Solution {
public:
string mergeAlternately(string word1, string word2)
{

    int word1Size = word1.size();
    int word2Size = word2.size();
    int size = word1Size + word2Size;

    int loopSize;
    if (word1Size <= word2Size)
    {
        loopSize = word1Size * 2;
    }
    else
    {
        loopSize = word2Size * 2;
    }

    string output;
    int j = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (i+1 <= loopSize)
        {
            if (i % 2 == 0)
            {
                output = output + word1[j];
                j++;
            }
            else
            {
                output = output + word2[k];
                k++;
            }
        }
        else if (i+1 > loopSize) // i '+ 1' bcz it's index and being compared with size
        {
            if (word1Size > word2Size)
            {
                output = output + word1[j];
                j++;
            }
            else if (word2Size > word1Size)
            {
                output = output + word2[k];
                // cout<<output<<endl;
                k++;
            }
        }
    }

    return output;
}
};
