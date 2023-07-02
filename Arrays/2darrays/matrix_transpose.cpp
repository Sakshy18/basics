//given a spuare matrix a and its no of rows or columns make its transpose;
//transpose is the matrix flipped over its main diagonal switching the row and column indices of matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)  //3 is no of rows so n
    {
        for(int j=i;j<3;j++) //row se column bada rahe isiliye as we have to swap only those elements

        {
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)  //printing matrix
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
//approach: pehle index is i, j after transpose it becomes j,i;
// 1 2 3
// 4 5 6  //swap only 2,3 6 with 4,5, 9 as baki are on place
// 7 8 9

// 1 4 7
// 2 5 8
// 3 6 9