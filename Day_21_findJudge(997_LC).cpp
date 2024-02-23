class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        if (n == 1)
            return n;

        vector<int> hash(n + 1, 0);
        int ans = -1;

        // 1) an element is a town judge if it gets the vote of all other elements
        for (int i = 0; i < trust.size(); i++) // frequency of elements which are candidates for town judge (elements present in right col)
            hash[trust[i][1]]++;

        // a town judge get votes of all other people (except himself)
        for (int i = 1; i <= n; i++)
            if (hash[i] == n - 1)
                ans = i;

        // 2) the town judge does not trust anybody it means the element which is town judge can not exist in left col
        for (int i = 0; i < trust.size(); i++)
            if (trust[i][0] == ans)
                ans = -1;

        return ans;
    }
};
