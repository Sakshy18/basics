Given an m x n matrix, return all elements of the matrix in spiral order.
input matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
 
 vector<int> ans;  //to store final ans
        int row=matrix.size();  //each matrix is a container as its vcetor of vector
        int col=matrix[0].size();//to find size of inner vector ie vector[0] is a vector and uska size is column length
        int top=0;
        int bottom=row-1;
        int left=0;
        int right=col-1;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if(top<=bottom) //aswe r putting loop on left and right we r already checking it so putting condition of top and bottom here
        {
        for(int i=right;i>=left;i--)
        {
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }

        
        if(left<=right)  //aswe r putting loop on bottom and top we r already checking it so putting condition of left and right here

        {
            for(int i=bottom;i>=top;i--)
        {
            ans.push_back(matrix[i][left]);
        }
        left++;

        }
        

        }
       
        return ans;
        
    }
    //intuition:
    go from left to right then right to bottom thn right to left and then bottom to top
