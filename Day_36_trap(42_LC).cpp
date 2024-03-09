class Solution
{
public:
    int trap(vector<int> &height)
    {
        //   Approach:
        //   4,2,0,3,2,5
        // - Find the maxleft  of each element:          4 4 4 4 4 5
        // - Find the maxright of each element:          5 5 5 5 5 5
        // - Boundary = minimum of maxleft and maxright: 4 4 4 4 4 5
        // - Substract boundary to height and sum to get our answer 0+2+4+1+2+0=9

        int size = height.size();
        vector<int> maxLeft(size, 0);
        vector<int> maxRight(size, 0);

        // Find the maxLeft
        int leftGreatest = height[0];
        for (int i = 0; i < size; i++)
        {
            if (height[i] > leftGreatest)
            {
                leftGreatest = height[i];
            }

            maxLeft[i] = leftGreatest;
        }

        // Find the maxright
        int rightGreatest = height[size - 1];
        for (int i = size - 1; i >= 0; i--)
        {
            if (height[i] > rightGreatest)
            {
                rightGreatest = height[i];
            }

            maxRight[i] = rightGreatest;
        }

        // Find Boundary & then Substract boundary to height
        vector<int> boundary(size, 0);
        int count = 0;

        for (int i = 0; i < size; i++)
        {
            boundary[i] = min(maxLeft[i], maxRight[i]);

            count += boundary[i] - height[i];
        }

        return count;
    }
};
