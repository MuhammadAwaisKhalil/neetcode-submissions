class Solution {
public:
    bool getVal(vector<vector<int>> m,int tar,int row){
        int st=0,end=m[row].size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(tar==m[row][mid]){
                return true;
            }
            else if(tar<m[row][mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int sR=0,eR=m-1;
        while(sR<=eR){
            int midR = sR+(eR-sR)/2;
            if(target>=matrix[midR][0]&&target<=matrix[midR][n-1]){
                return getVal(matrix, target, midR);
            }
            else if(target>matrix[midR][n-1]){
                sR=midR+1;
            }
            else{
                eR=midR-1;
            }
        }
        return false;
    }
};
