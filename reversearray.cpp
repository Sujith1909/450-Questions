void reverseArray(vector<int> A,int start,int end)
{
    while(start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}