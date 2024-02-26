class Solution
{
public:
    int digitBreakdown(int num)
    {
        int sum = num;

        while (num != 0)
        {
            int temp = num % 10;
            sum = temp + sum;
            num = num / 10;
        }

        return sum;
    }
    
    int addDigits(int num)
    {
        while (num > 9)
            digitBreakdown(num);
    }
};
