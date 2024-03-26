class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();

        // --- STEP NO 1 ---

        // Check if array contains 1
        int containOne = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                containOne++;
                break;
            }
        }

        // If 1 is not present, simply return 1
        if (containOne == 0)
            return 1;

        // If 1 is present, change all elements which are not in range (of 1 to n) to 1, so it will be easy to handle themm
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 1 || nums[i] > n)
                nums[i] = 1;
        }

        // --- STEP NO 2 ---

        // The MARKING will be as follow (n=4)
        // Elements: 1 to n
        // index:    0 to n-1
        // for element '1' -> index no 1
        // for element '2' -> index no 2
        // for element '3' -> index no 3
        // for element '4' (n) -> index no 0 will be used ---> EDGE CASE
        
        for (int i = 0; i < n; i++)
        {
            int val = abs(nums[i]);
            if (val == n) // EDGE CASE
                nums[0] = -abs(nums[0]);
            else
                nums[val] = -abs(nums[val]);
        }

        // --- STEP NO 3 ---

        for (int i = 1; i < n; i++)
        {
            if (nums[i] > 0)
                return i;
        }

        if (nums[0] > 0)
            return n;

        return n + 1;
    }
};
