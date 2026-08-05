class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int j=1,n=prices.size();
        int curMin=prices[0];
        while(j<n){
            if(curMin<prices[j]){
                maxProfit=max(maxProfit,prices[j]-curMin);
            }
            else{
                curMin=prices[j];
            }
            j++;
        }
        return maxProfit;
    }
};
