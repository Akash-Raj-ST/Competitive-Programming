class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int start=0,end=(n*m)-1,mid;
        int x,y;

        while(start<=end){
            mid = (start+end)/2;

            x = mid/m;
            y = mid%m;
            if(matrix[x][y]==target) return true;

            if(matrix[x][y]>target) end=mid-1;
            else start = mid+1;
        }
        return false;
    }
};