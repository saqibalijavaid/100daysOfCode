class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;;
    }
};

// class Solution
// {
// public:
//     bool rotateString(string s, string goal)
//     {
//         if (s.length() != goal.length())
//             return false;

//         string temp = s + s;
//         bool isFound = temp.find(goal) != string::npos; // npos means not found

//         return isFound;
//     }
// };

// ---------- Another Solution ----------

// class Solution
// {
// public:
//     string rotateAtK(string goal, int k)
//     {
//         string temp = goal;
//         reverse(temp.begin(), temp.begin() + k);
//         reverse(temp.begin() + k, temp.end());
//         reverse(temp.begin(), temp.end());

//         return temp;
//     }

//     bool rotateString(string s, string goal)
//     {
//         if (s.length() != goal.length())
//             return false;

//         int k = 1;
//         while (k <= goal.length())
//         {
//             string temp = rotateAtK(goal, k);
//             cout << s << " " << temp << endl;
//             if (s == temp)
//                 return true;
//             else
//                 k++;
//         }

//         return false;
//     }
// };
