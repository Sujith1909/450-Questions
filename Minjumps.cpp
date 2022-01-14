int minJumps(int arr[], int n){
        if(n == 1) return 0;
        int max_reachable , steps_possible , jumps;
        max_reachable = arr[0];
        jumps = 1;
        steps_possible = arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(i > max_reachable) return -1;
            if(i == n -1) return jumps;
            
            max_reachable = max(max_reachable,arr[i]+i);
            if(steps_possible == 0)
            {
                jumps++;
                steps_possible = max_reachable - i;
            }
            steps_possible--;
            
        }
    }