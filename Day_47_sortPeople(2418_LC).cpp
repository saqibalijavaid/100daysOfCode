class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        map<int, string> hash;

        for (int i = 0; i < heights.size(); i++)
            hash[heights[i]] = names[i];

        sort(heights.rbegin(), heights.rend()); // Descending order

        vector<string> ans;
        for (int i = 0; i < heights.size(); i++)
                ans.push_back(hash[heights[i]]);

        return ans;
    }
};
