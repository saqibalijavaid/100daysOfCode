class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int size = nums.size();
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            int j = i + 1;
            int k = size - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else if (sum == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    answer.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j - 1] == nums[j])
                        j++;
                    while (j < k && nums[k + 1] == nums[k])
                        k--;
                }
            }
        }

        return answer;
    }
};

// @takeUforward
