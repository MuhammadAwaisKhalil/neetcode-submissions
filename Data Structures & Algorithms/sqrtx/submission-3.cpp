class Solution {
public:
    int mySqrt(int x) {
        long long l=0,r=x, res=0, mid=0;
        if(x==0)
        return 0;
        while(l<=r){
            mid = l+(r-l)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                r=mid-1;
            }
            else{
                res=mid;
                l=mid+1;
            }
        }
        return res;
    }
};