class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        int max = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > max)
                max = nums[i];
        }

        int left = 0, right = 0, count = 0;
        long long ans = 0;
        while (right < n)
        {
            if (nums[right] == max)
                count++;

            while (count >= k)
            {
                if (nums[left] == max)
                    count--;
                left++;
                ans += n - right;
            }
            right++;
        }

        return ans;
    }
};

/*
Algorithm

    Find the Maximum Element:
        Find the maximum element (max_num) in the array nums.

    Initialize Variables:
        Initialize left, right to 0, count to 0, and ans to 0.

    Sliding Window Technique:
        Use a sliding window approach to iterate through nums.
        Move right pointer from left to right.
        Increment count if nums[right] equals max_num.

    Count Subarrays:
        If count >= k, calculate subarrays count:
            Add nums.size() - right to ans.
            This accounts for all subarrays ending at right with at least k occurrences of max_num.

    Adjusting Window:
        Shrink window from left if necessary:
            Move left pointer rightwards.
            Decrement count if nums[left] equals max_num.

    Move Right Pointer:
        Move right pointer to continue expanding the window.

    Return Answer:
        Return ans as the total count of subarrays satisfying the condition.

*/
