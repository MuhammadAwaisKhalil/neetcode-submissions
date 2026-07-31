
class Solution {
public:
    bool isValid(vector<int> piles,int h, int banph){
        int hours=0;
        for(int i=0;i<piles.size();i++){
            hours=hours+((piles[i]+banph-1)/banph);
            if(hours>h){
                return false;
            }
            
        }
        return true;
    }

    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int st=1,end=piles[n-1], ans;
        if(h==n){
            return end;
        }
        while(st<=end){
            int mid = st+(end-st)/2;
            if(isValid(piles,h,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};
