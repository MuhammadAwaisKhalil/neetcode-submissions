class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0;
        int p2=0;
        int n1=word1.length();
        int n2=word2.length();
        string ans="";
        if(n1==0)
        return word2;
        if(n2==0)
        return word1;
        while(p1<n1&&p2<n2){
            ans+=word1[p1];
            ans+=word2[p2];
            p1++;
            p2++;
            while(p1>=n1&&p2<n2){
                ans+=word2[p2];
                p2++;
            }
            while(p2>=n2&&p1<n1){
                ans+=word1[p1];
                p1++;
            }

        }
        return ans;
    }
};