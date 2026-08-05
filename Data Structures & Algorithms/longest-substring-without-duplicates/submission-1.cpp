class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length(),maxLen=0;
        unordered_map<char,int> m;
        while(j<n){
            if(m.contains(s[j])&&i<=m[s[j]]){
                
                i=m[s[j]]+1;
                m[s[j]]=j;
                
            }
            else{
                m[s[j]]=j;
            }
            j++;
            
            maxLen=max(maxLen, j-i);
            
            
        }
        return maxLen;

    }
};
