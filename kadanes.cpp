long long maxSubarraySum(int arr[], int n){
        
        int max_sum = arr[0];
        int curr_sum = arr[0];
        for(int i = 1;i<n;i++)
        {
            curr_sum += arr[i];
            if(arr[i] > curr_sum) curr_sum = arr[i];
            max_sum = max(max_sum,curr_sum);
        }
        return max_sum;
        
    }