class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        // If i = 0 & j = 2
        // What are the max no of subarrays which end at index j?
        // We have Formula:
        // Number of Subarrays = j-i+1 = 2-0+1 = 3
        // 1st subarray includes index: 0,1,2
        // 2nd subarray includes index: 1,2
        // 3rd subarray includes index: 3

        // SLIDING WINDOW TECHNIQUE

        // In nums we have only +ve values but k includes +ve values as well as Zero.
        if (k == 0)
            return 0;

        int i = 0, j = 0;
        int count = 0;
        int product = 1;

        int n = nums.size();

        while (j < n) // expansion
        {
            product *= nums[j];

            while (product >= k && i <= j) // compression
            {
                product /= nums[i];
                i++;
            }

            count += (j - i + 1);
            j++;
        }

        return count;
    }
};
