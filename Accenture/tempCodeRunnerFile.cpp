int findCount(int n, int arr[], int num, int diff) {
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (abs(arr[i] - num) <= diff)
        {
            count++;
        }
    }
    return count > 0 ? count : -1;
}