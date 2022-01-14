int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> minleft(n);
        minleft[0] = -1;
        
        for(int i=1;i<n;i++){
            if(minleft[i-1] == -1){
                minleft[i] = prices[i-1];
            }
            else{
                minleft[i] = min(minleft[i-1],prices[i-1]);
            }
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            ans = max(ans,prices[i] - minleft[i]);
        }
         return ans;
    }