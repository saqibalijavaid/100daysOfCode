class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        // Find Minimum in Rotated Sorted Array
        int left = 0;
        int right = nums.size() - 1;

        if (nums[left] <= nums[right])
            return nums[left];
        // (Case <) -> possible when array rotation
        // is 0 or multiple of size
        // (Case =) -> possible when array size is 1

        // Binary Search
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        return nums[left]; // or return nums[right];
    }
};
