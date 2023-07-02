#include<iostream>
#include<vector>
using namespace std;

bool issafe(vector<vector<int>>& graph,vector<int> &colors, int vertex, int color)
{
    for(int i=0;i<graph.size();i++)
    {
        if(graph[vertex][i]==1 && colors[i]==color)
        {
            return false;
        }
    }

    return true;
}

bool solvegraphcolor(vector<vector<int>>& graph, int m, vector<int> &colors,int vertex)

{
    if(vertex==graph.size())
    {
        return true;
    }
    for(int color=1;color<=m;color++)
    {
        if(issafe(graph, colors, vertex, color))
        {
            colors[vertex]=color;
            if(solvegraphcolor(graph,m,colors,vertex+1))
            {
                return true;
            }

            colors[vertex]=0;
        }
        

    }

    return false;
}

int main()
{
    int n,m;
    cout<<"enter number of vertices:"<<endl;
    cin>>n;

    cout<<"enter number of colors:"<<endl;
    cin>>m;

    vector<vector<int>> graph(n,vector<int>(n,0));

    vector<int> colors(n,0);
    cout<<"enter adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>graph[i][j];
        }

    }

    if(solvegraphcolor(graph,m,colors,0))
    {
        cout<<"solution is"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<colors[i]<<" ";
        }
    }
    else
    {
        cout<<"no valid solution exists"<<endl;
    }


}