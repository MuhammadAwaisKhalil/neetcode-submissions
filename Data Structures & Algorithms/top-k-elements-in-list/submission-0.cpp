class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto n:m){
            freq[n.second].push_back(n.first);
        }

        vector<int> result;
        for(int i=freq.size()-1;i>=0;i--){
            for(auto n:freq[i]){
                result.push_back(n);
                if(result.size()==k){
                    return result;
                }
            }
        }
        
    }
};