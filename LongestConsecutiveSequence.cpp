int longestConsecutive(vector<int>& nums) {
        set<int> set;
        for(auto num : nums){
            set.insert(num);
        }
        int longestStreak = 0;
        
        for(int num : set){
            if(!set.count(num-1)){
                int currentNum = num;
                int currentStreak = 1;
                
                while(set.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak,currentStreak);
            }
            
        }
        
        return longestStreak;
    }