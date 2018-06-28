#include<iostream>

using namespace std;
int graph[10][10];
int visited[10];

void dfs(int s, int n)
{
    visited[s] = 1;
    cout << s << " ";
    for(int i = 0 ; i < n; i++)
    {
        if(graph[s][i] == 1)
            if(visited[i] == 0)
                dfs(i,n);
    }
}


int main()
{
    //using adjacency graphs
    int n;
    cout << "Enter number of nodes and number of edges" << endl;
    cin >> n;
//    int graph[n][n];
    //int visited[n];

    //enter the connectivity values

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> graph[i][j];

    //visited info
    for(int i = 0; i < n ; i++)
        visited[i] = 0;

    //dfs calls
    //enter source vertex
    int source;
    cout << "Enter source" << endl;
    cin >> source;

    visited[source] = 1;
    dfs(source,n);

    for(int i = 0; i < n; i++)
    {
       if(visited[i] == 0)
            dfs(i,n);
    }
}
