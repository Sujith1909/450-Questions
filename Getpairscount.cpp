int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i=0;i<n;i++){
            int sum = k - arr[i];
            if(mp.find(sum) != mp.end()){
                ans = ans + mp[sum];
            }
            mp[arr[i]]++;
        }
        return ans;
    }