class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp1;

        vector<int> difference(n, 0);
        for (int i = 0; i < n; i++)
        {
            mp1[nums[i]]++;
            unordered_map<int, int> mp2;
            for (int j = i + 1; j < n; j++)
            {
                mp2[nums[j]]++;
            }
            difference[i] = mp1.size() - mp2.size();
        }

        return difference;
    }
};
