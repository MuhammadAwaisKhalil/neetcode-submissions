class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m(nums.begin(),nums.end());
        int currentNum,longest=0,current_streak=0;
        for(auto num:m){
            current_streak=0;
            if(!m.contains(num-1)){
                currentNum=num;
                current_streak=1;
            }
            while(m.contains(currentNum+1)){
                currentNum+=1;
                current_streak+=1;
            }

            longest = max(longest,current_streak);

        }
        return longest;
    }
};
