#include<iostream>
#include<vector>
using namespace std;
void printboard(const vector<int> & solution)
{
    int n=solution.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(solution[i]==j)
            {
                cout<<"Q";
            }
            else
            {
                cout<<"-";
            }
        }
        cout<<endl;
    }
}

bool issafe(const vector<int> & solution, int row,int col)
{
     int n=solution.size();
     for(int i=0;i<row;i++)
     {
        if(solution[i]==col)
        {
            return false;  //if queen exists on same col;
        }
     }

     for(int i=row, j=col; i>=0 && j>=0 ; i--,j--)  //checking left diagonal
     {
        if(solution[i]==j)
        {
            return false;
        }
     }
     for(int i=row, j=col; i>=0 && j<n ; i--,j++)  //check right diagonal
     {
        if(solution[i]==j)
        {
            return false;
        }
     }

     return true;
}

bool solvenqueen(vector<int> & solution, int row)
{
    int n=solution.size();
    if(row==n)
    {
        return true; //base case
    }

    for(int col=0;col<n;col++)
    {
        if(issafe(solution,row,col))
        {
            solution[row]=col;
            if(solvenqueen(solution,row+1))
            {
                return true;
            }  

            solution[row]=-1;//backtracking 
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"enter the size of board"<<endl;
    cin>>n;
    vector <int> solution(n,-1);
    if(solvenqueen(solution,0))
    {
        cout<<"the solution board is:"<<endl;
        printboard(solution);
    }

    else
    {
        cout<<"no valid solution exists"<<endl;
    }


}