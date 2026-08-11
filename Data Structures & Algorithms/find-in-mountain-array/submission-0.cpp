/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
    int searchInLeft(MountainArray &mountainArr,int target,int p){
        int l=0,r=p;
        while(l<=r){
            int mid = l+(r-l)/2;
            int val = mountainArr.get(mid);
            if(val==target){
                return mid;
            }
            else if(val<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return -1;
    }
    int searchInRight(MountainArray &mountainArr,int target,int p, int r){
        int l=p;
        while(l<=r){
            int mid = l+(r-l)/2;
            int val = mountainArr.get(mid);
            if(val==target){
                return mid;
            }
            else if(val<target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int l=0,r=n-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        int peak = mountainArr.get(l);
        if(target>peak){
            return -1;
        }
        if(target==peak){
            return l;
        }
        int res = searchInLeft(mountainArr,target,l-1);
        if(res!=-1){
            return res;
        }
        res = searchInRight(mountainArr,target,l+1,n-1);
        return res;

    }
};