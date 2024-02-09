class Solution
{
public: // Search in Rotated Sorted  Array
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            // After initializing mid we have two parts of array
            // of these two parts, one part must be sorted
            // we can easily check if our target lies in the range of sorted part
            // if lies we will fing target in it
            // otherwise we will choose otherside

            if (nums[mid] == target)
                return mid;

            if (nums[left] <= nums[mid])
            {
                if ((nums[left] <= target) && nums[mid] >= target)
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }

            // else if(nums[mid]<=nums[right])
            else
            {
                if ((nums[mid] <= target) && nums[right] >= target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};
