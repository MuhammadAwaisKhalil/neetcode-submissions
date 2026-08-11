class Solution {
public:
    bool isValid(vector<int> nums,int tS,int k){
        int tempSum=nums[0],sub=1;
        for(int i=1;i<nums.size();i++){
            if(tempSum+nums[i]<=tS){
                tempSum+=nums[i];
            }
            else{
                tempSum=nums[i];
                sub++;
            }
        }
        return sub<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        int r=0,l=INT_MIN,ans=-1;
        for(int i=0;i<nums.size();i++){
            l=max(l,nums[i]);
            r+=nums[i];
        }
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isValid(nums,mid,k)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};