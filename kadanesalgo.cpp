long long maxSubarraySum(int arr[], int n)
    {
        long long curr_sum = arr[0], max_sum = arr[0];
        for(int i=1;i<n;i++)
        {
            curr_sum += arr[i];
            if(curr_sum < arr[i])
            {
                curr_sum = arr[i];
            }
            if(curr_sum > max_sum)
            {
                max_sum = curr_sum;
            }
            
        }
        return max_sum;
        
    }