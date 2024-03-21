class Solution
{
public:
    bool canPlaceFlowers(vector<int> &nums, int n)
    {
        if (n == 0)
            return true;

        for (int i = 0; i < nums.size(); i++)
        {
            if ((i == 0 || nums[i - 1] == 0)
                            &&
                        nums[i] == 0
                            &&
                (i == nums.size() - 1 || nums[i + 1] == 0))
            {
                n--;
                i++; // Skip next position since we've placed a flower there
            }
        }

        return n <= 0;
    }
};

// For first and last index
// First index value == 0 and i+1 == 0 --> n--
// Last index value == 0 and i-1 == 0 --> n--
// FOR i-th position, see if at places i-1 and i+1, the values stored are 0.
