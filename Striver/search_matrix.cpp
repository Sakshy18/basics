// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

code:
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m= matrix[0].size();
        int j=m-1;  //ptr 1 which is at first row last column
        int i=0;  //2nd pointers points at row
        while(j>=0 && i<n)  //until our pointer gets out of bound
        {
            if(matrix[i][j]==target)   //if find target return true
            {
                return true;
            }

            if(matrix[i][j]>target)  //if matrix number > target we go left as left elements are less than current
            {
                j--;
            }
            else{   //if matrix element less than target we go down as down elements greater than current
                i++;
            }
        }
        return false;
    }