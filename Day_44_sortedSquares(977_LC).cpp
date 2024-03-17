class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        // Squares of a SORTED Array

        vector<int> ans(nums.size());

        int left = 0;
        int right = nums.size() - 1;
        int pos = nums.size() - 1; // indexing for ans array (end to start)

        while (left <= right)
        {
            int tempLeft = nums[left] * nums[left];
            int tempRight = nums[right] * nums[right];

            if (tempLeft > tempRight)
            {
                ans[pos] = tempLeft;
                pos--;
                left++;
            }
            else
            {
                ans[pos] = tempRight;
                pos--;
                right--;
            }
        }

        return ans;
    }
};

// https://robertocannella-f5b4b.web.app/coding-challenges/sorted-squares
