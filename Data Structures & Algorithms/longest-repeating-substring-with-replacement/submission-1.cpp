class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0); 
        int maxFreq=0,left=0,right=0,maxLen=0;
        for(right=0;right<s.length();right++){
            freq[s[right]-'A']++;
            maxFreq=max(maxFreq,freq[s[right]-'A']);

            if((right-left+1) - maxFreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
