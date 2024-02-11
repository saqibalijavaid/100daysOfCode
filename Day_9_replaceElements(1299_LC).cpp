vector<int> replaceElements(vector<int> &arr)
{
    int size = arr.size();
    int greatest = arr[size - 1];
    arr[size - 1] = -1;

    for (int i = size - 2; i >= 0; i--)
    {
        int temp = arr[i]; // Store the current value before overwriting
        arr[i] = greatest; // Assign the greatest value to the current element
        if (temp > greatest) // Update greatest if necessary
        {
            greatest = temp;
        }
    }

    return arr;
}
