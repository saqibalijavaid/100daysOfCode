class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        long long count = 0;
        int n = nums.size();

        int idx = -1, i = -1, j = -1;

        for (int x = 0; x < n; x++)
        {
            if (nums[x] < minK || nums[x] > maxK)
                idx = x;
            if (nums[x] == minK)
                i = x;
            if (nums[x] == maxK)
                j = x;

            int temp = min(i, j) - idx;
            count += max(0, temp);

            // count += (temp < 0) ? 0 : temp;
        }
        return count;
    }
};
