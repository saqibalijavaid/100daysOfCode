class Solution
{
public:
    bool canWinNim(int n)
    {
        if (n % 4 == 0)
            return false;

        return true;
    }
};

// it's a simple trick if the input is multiple of 4 only in that case you will lose
// why?
// try the example of n = 4
// Rules:
// you go first.
// one player can remove 1 to 3 stones
// The one who removes the last stone is the winner.
// -------------------------------
// can be solved through recursion
