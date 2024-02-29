class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return false;

        while (n % 2 == 0) // Divide by 2 as much as possible
            n /= 2;
        while (n % 3 == 0) // Divide by 3 as much as possible
            n /= 3;
        while (n % 5 == 0) // Divide by 5 as much as possible
            n /= 5;

        return n == 1; // If n is reduced to 1, it is ugly
    }
};
