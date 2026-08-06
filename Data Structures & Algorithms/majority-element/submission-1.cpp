class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        if(nums.size()==1){
            return ans;
        }
        int freq=1;
        for(int i=1;i<nums.size();i++){
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }

            if(freq==0){
                ans=nums[i];
                freq++;
            }
        }
        return ans;
    }
};