class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //2D -> to 1D array
        int left=0;
        int row_size=matrix.size();
        int col_size=matrix[0].size();
        int right=row_size*col_size-1;
        int mid,row,col;
        while (left<=right){
            mid=left+((right-left)/2);
            row=mid/col_size;
            col=mid%col_size;
            if(target==matrix[row][col]){
                return true;
            }
            else if (target>matrix[row][col]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }

        }
        return false;
    }
};