class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,n=nums.size();
        vector<int> pSum(n,0);
        pSum[0]=nums[0];
        for(int i=1;i<n;i++){
            pSum[i]=pSum[i-1]+nums[i];
        }
    
        unordered_map<int, int> m;
        for(int j=0;j<n;j++){
            if(pSum[j]==k){
                count++;
            }

            int val = pSum[j]-k;
            if(m.contains(val)){
                count+=m[val];
            }
            m[pSum[j]]++;
        }
        return count;
    }
};