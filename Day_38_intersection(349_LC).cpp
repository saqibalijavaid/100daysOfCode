class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> hash(10001, 0);
        for (int i = 0; i < nums1.size(); i++)
            if (hash[nums1[i]] == 0)
                hash[nums1[i]]++;

        for (int i = 0; i < nums2.size(); i++)
            if (hash[nums2[i]] == 1)
                hash[nums2[i]]++;


        vector<int> ans;

        for (int i = 0; i < 10001; i++)
            if (hash[i] == 2)
                ans.push_back(i);

        return ans;
    }
};
