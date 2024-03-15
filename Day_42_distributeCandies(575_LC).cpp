class Solution
{
public:
    int distributeCandies(vector<int> &candy)
    {
        sort(candy.begin(), candy.end());

        int count = 1;
        for (int i = 1; i < candy.size(); i++)
        {
            if (count == candy.size() / 2)
                return count;
            if (candy[i - 1] < candy[i])
                count++;
        }
        return count;
    }
};
