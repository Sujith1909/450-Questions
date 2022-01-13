void shift(vector<int> A)
{
    int n = A.size();
    int left = 0 , right = n-1;
    while(left < right)
    {
        if(A[left] < 0)
        {
            left++;
            continue;
        }

        if(A[left] > 0 && A[right] < 0)
        {
            swap(A[left],A[right]);
            right--;
            continue;
        }

        right--; // dont have to mention the condition that left is greater than 0 and right is greater than 0
    }
}