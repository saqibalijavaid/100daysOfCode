class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        // s and t consist of any valid ascii character.
        // ascii character -> 0 to 127 -> Total 128

        int mapS[128] = {0};
        int mapT[128] = {0};

        for (int i = 0; i < s.size(); ++i)
        {
            if (mapS[s[i]] != mapT[t[i]])
                return false;

            mapS[s[i]] = i + 1;
            mapT[t[i]] = i + 1;
        }

        return true;
    }
};

// --- DRY RUN for better understanding ---

// we have made maps so as we know 'a' == 97, we can imagine indexing as as a,b,c,... instead of 97,98,99,...
// we are storing i+1 and not i in maps
// The reason is that, in both maps, we initialized all indexes with 0
// When i = 0 and we store i, means we will be storing 0, in this case it will be difficult to differentiate either it has any occurence or not bcz those who don't have any occurrences are also initialized with zero
