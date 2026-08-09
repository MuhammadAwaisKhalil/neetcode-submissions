class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Use duth national flag algo
        //divide array into 4 parts
        //0 to low-1,low to mid-1,mid to high-1,high to n-1
        // 0 to low-1 will be 0s then 1 and high to n-1 will be 2
        // mid to high will be unsorted elements
        // we check with mid as its infromt of low for 0 and if it is 0 we swap it witj lpw as it is next element same for high case as high is nect occuring 2 from end

        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
                
            }
        }
    }
};