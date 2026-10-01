class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int length=matrix.size();
        int breadth=matrix[length-1].size();
        int start=0;
        int end=length*breadth-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int row=mid/breadth;
            int col=mid%breadth;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};