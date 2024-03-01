class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ans;
        if (nums.empty())
            return ans;

        int first = nums[0];
        int last = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] + 1 == nums[i])
                last++;
            else
            {
                if (first == last)
                    ans.push_back(to_string(first));
                else if (first != last)
                    ans.push_back(to_string(first) + "->" + to_string(last));

                first = nums[i];
                last = nums[i];
            }
        }

        // Push the last range
        if (first == last)
            ans.push_back(to_string(first));
        else
            ans.push_back(to_string(first) + "->" + to_string(last));

        return ans;
    }
};
