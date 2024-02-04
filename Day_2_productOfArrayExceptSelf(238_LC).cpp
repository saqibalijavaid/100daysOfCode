class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
      // You must write an algorithm that runs in O(n) time and without using the division operation.
      
        vector<int> answerLeft;
        vector<int> answerRight;
        vector<int> answer;
        int size = nums.size();
        int pointer;

        int left = 0;
        int leftAnswer = 1;
        pointer = 0;

        while (left <= pointer)
        {
            if (left < pointer)
            {
                leftAnswer = leftAnswer * nums[left];
                left++;
            }
            answerLeft.push_back(leftAnswer);
            pointer++;
            if (pointer >= size)
                break;
        }

        int right = size - 1;
        int rightAnswer = 1;
        pointer = size - 1;

        while (right >= pointer)
        {
            if (right > pointer)
            {
                rightAnswer = rightAnswer * nums[right];
                right--;
            }
            // we are calulating starting from last so instead of using pushback func, we will insert our result in beginning otherwise we will have to reverse the loop
            answerRight.insert(answerRight.begin(), rightAnswer); // it will insert each element at beginning      
            pointer--;
            if (pointer < 0)
                break;
        }

        for (int i = 0; i < size; i++)
        {
            answer.push_back(answerLeft[i] * answerRight[i]);
        }
        return answer;
    }
};
