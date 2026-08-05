class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,profit=-1;;
        int j=1,n=prices.size();
        int curMin=prices[0];
        while(j<n){
            if(curMin<prices[j]){
                profit=prices[j]-curMin;
                if(profit>maxProfit){
                    maxProfit=profit;
                    
                }
                
            }
            else{
                curMin=prices[j];
            }
            j++;
        }
        return maxProfit;
    }
};
