int maxProfit(vector<int>& arr) {
         int n = arr.size();

        vector<int> back(n, 0), front(n, 0);

        //filling front array
        int mini = arr[0];
        for (int i = 0; i < n; i++) {
            front[i] = max(front[i], arr[i] - mini);
            mini = min(arr[i], mini);
        }
        int maxi = arr[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            back[j] = max(back[j + 1], maxi - arr[j]);
            maxi = max(maxi, arr[j]);
        }
         int ans = front[n - 1];
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, front[i] + back[i + 1]);
        }

        return ans;

    }