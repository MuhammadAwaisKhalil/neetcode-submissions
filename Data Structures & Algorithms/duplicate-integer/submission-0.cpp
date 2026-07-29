class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dups;
        for(int i=0;i<nums.size();i++){
            if(dups.contains(nums[i])){
                return true;
            }
            dups[nums[i]]++;
        }
        return false;
    }
};