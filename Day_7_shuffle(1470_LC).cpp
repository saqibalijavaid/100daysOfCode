class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        int j = n;
        // index of element which will be shifted
        int k = 1;
        // index which will be choosed by insert function

        for (int i = 0; i < n; i++)
        {
            int temp = nums[j];
            nums.erase(nums.begin() + j);
            nums.insert(nums.begin() + k, temp);
            k += 2;
            j++;
        }
        return nums;
    }
};
