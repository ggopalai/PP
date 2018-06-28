#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
//global 
int g[10][10];
int v[10];
queue<int> q;

void bfs(int s, int n)
{
    v[s] = 1;
    cout << s << " ";
    for(int i = 0; i < n; i++)
    {
        if(g[s][i] == 1 && v[i] != 1)
            q.push(i);

    }

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        if(v[x] != 1)
            bfs(x,n);
    }
}


int main()
{
    int n;
    cout << "Enter number of nodes :" << endl;
    cin >> n;

    cout << "Enter connections :" << endl;


    for(int i = 0 ; i < n ; i++)
        for(int j = 0; j < n ; j++)
            cin >> g[i][j];

    for(int i = 0; i < n ; i++)
        v[i] = 0;

    int source;
    cout << "Enter source " << endl;
    cin >> source;

    v[source] = 1;
    bfs(source,n);

    for(int i = 0; i < n ; i++)
        if(v[i] == 0)
            bfs(i,n);

}
