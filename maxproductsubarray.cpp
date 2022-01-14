int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int ma = ans;
        int mi = ans;
        
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] < 0){
                swap(ma,mi);
            }
            ma = max(ma*nums[i],nums[i]);
            mi = min(mi*nums[i],nums[i]);
            ans = max(ma,ans);
        }
        return ans;
    }