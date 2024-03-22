class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end());

        int n = points.size();
        int ans = 1;
        int curr = points[0][1];

        for (int i = 1; i < n; i++)
        {
            if (points[i][0] > curr)
            {
                curr = points[i][1];
                ans++;
            }
            else
                curr = min(curr, points[i][1]);
        }
        return ans;
    }
};

/*
Approach
Here's a breakdown of the approach:
    1: Sorting: The first step is to sort the balloons based on their start points. This helps in efficiently processing them in a sequential order.
    2: Initialization: Initialize ans to 1, as there is at least one arrow required to burst balloons, and initialize curr with the end point of the first balloon (points[0][1]).
    3: Iteration: Iterate through the sorted balloons starting from the second one (index 1), as we've already accounted for the first balloon.
    4: Checking Overlapping Balloons:
        If the start point of the current balloon is greater than curr, it means that the current balloon doesn't overlap with the previous one. In this case, we update curr to the end point of the current balloon (points[i][1]) and increment ans by 1. This indicates that we need another arrow to burst these non-overlapping balloons.
        If the start point of the current balloon is less than or equal to curr, it means that the current balloon overlaps with the previous one. In this case, we update curr to the minimum of the current curr and the end point of the current balloon (points[i][1]). This ensures that curr always represents the end point of the common area of overlap among the balloons.
    5: Return: After processing all the balloons, return the final value of ans, which represents the minimum number of arrows required to burst all the balloons.
*/
