class Solution {
public:
vector<int> rearrangeArray(vector<int> &nums)
{

    int positive[nums.size() / 2];
    int negative[nums.size() / 2];

    int p = 0;
    int n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            positive[p] = nums[i];
            p++;
        }
        else if (nums[i] < 0)
        {
            negative[n] = nums[i];
            n++;
        }
    }

    p = 0, n = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            nums[i] = positive[p];
            p++;
        }
        else
        {
            nums[i] = negative[n];
            n++;
        }
    }

    return nums;
}
};
