// You must write an algorithm that runs in O(n) time and uses only constant extra space.

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        // solution to solve using NO EXTRA SPACE
        // treat nums values as index(positions) bcz 1 <= nums[i] <= n

        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int val = abs(nums[i]); // i.e. if val = 3 it means it is pointing to third position (index = 2)
            int idx = val - 1;      // val = 3 -> third position is 2

            if (nums[idx] < 0)
                ans.push_back(val);

            nums[idx] *= -1;
        }

        return ans;
    }
};
