class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int stuZero = 0, stuOne = 0;
        int n = students.size();

        // count number of students who likes sandwich zero and count those who like sandwich one
        for (int i = 0; i < n; i++)
        {
            if (students[i] == 1)
                stuOne++;
            else
                stuZero++;
        }

        // Run Loop until the count of stuZero does not becomes zero and there still lefts zero sandwhiches
        // or vice versa
        for (int i = 0; i < n; i++)
        {
            if (sandwiches[i] == 0 && stuZero != 0)
                stuZero--;
            else if (sandwiches[i] == 1 && stuOne != 0)
                stuOne--;
            else
                return n - i;
        }

        // If the number of students who likes sandwhich ZERO are equal to number of ZERO sandwiches
        // OR
        // The number of students who likes sandwhich ONE are equal to number of ONE sandwiches
        return 0;
    }
};
