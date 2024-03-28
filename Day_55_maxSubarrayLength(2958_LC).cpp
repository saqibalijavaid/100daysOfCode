class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> freqMap; // store Frequency of each element
        int left = 0, right = 0;
        int maxLen = 0;

        while (right < n)
        {
            freqMap[nums[right]]++;

            while (freqMap[nums[right]] > k)
            {
                freqMap[nums[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};
