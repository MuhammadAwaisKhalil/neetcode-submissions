class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1,bestArea=INT_MIN;
        while(left<right){
            bestArea = max(bestArea,(right-left)*(min(heights[left],heights[right])));
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }

        }
        return bestArea;
    }
};
