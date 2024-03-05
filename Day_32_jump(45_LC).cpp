class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int totalJumps = 0;

        // destination -> last index
        int destination = nums.size() - 1;
        int coverage = 0;
        int lastJumpIndex = 0;

        // Base Case
        if (nums.size() == 1)
            return 0;

        // Greedt Approach
        for (int i = 0; i < nums.size(); i++)
        {
            coverage = max(coverage, i + nums[i]);
            if (i == lastJumpIndex)
            {
                lastJumpIndex = coverage;
                totalJumps++;

                // check if we reached destination already
                if (coverage >= destination)
                {
                    return totalJumps;
                }
            }
        }

        return totalJumps;
    }
};
