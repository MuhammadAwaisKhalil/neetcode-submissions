class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=0;i<ans.length();i++){
            for(auto s:strs){
                if(i==s.length()||s[i]!=ans[i]){
                    return ans.substr(0, i);
                }
            }
        }
        return ans;
        

    }
};