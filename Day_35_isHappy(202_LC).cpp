class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> usedIntegers;

        while (true)
        {
            int sum = 0;
            while (n != 0)
            {
                sum = sum + pow(n % 10, 2);
                n /= 10;
            }

            if (sum == 1)
                return true;

            n = sum;
            if (usedIntegers.count(n))
                return false; // if "n" is already stored in SET it means a specific loop will run again and again so just return false e.g. 61*->37->58->89->145->42->20->4->16*

            usedIntegers.insert(n); // store each "sum->(n)" in SET
        }
    }
};
