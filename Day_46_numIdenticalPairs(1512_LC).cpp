class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        // if an element is present n times then the number of pairs it can make are n * (n – 1) / 2
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
            mpp[nums[i]]++;

        int count = 0;
        for (auto &i : mpp)
            if (i.second > 1)
            {
                int n = i.second;
                count += n * (n - 1) / 2;
            }

        return count;
    }
};
