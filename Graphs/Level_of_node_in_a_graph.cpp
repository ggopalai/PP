Found the level of node in a graph. This also gives the minimum distance of nodes from the source. Solved using bfs traversal.
Graph info stored as adjacency list.
[0] - [1] - [2] - [3] - [4]
1   -  2  -  4  -     -  3
2   -  3  -     -     -
#include<iostream>
#include<queue>

using namespace std;

queue<int> q;
vector<int> v[5]; // vector of vector. each vector corresponds to a node
int vis[5] = {0}; // visited history
int levels[5]; // level of node

void bfs(int s)
{
    vis[s] = 1;
    q.push(s);

    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        for(int i = 0 ; i < v[x].size(); i++) // for each node in the list
      {
        if( vis[ v[x][i] ] == 0 )
            {
                q.push(v[x][i]);
                levels[ v[x][i] ] =  levels[x] + 1; // one greater than the parent
                vis[ v[x][i] ] = 1 ;
            }

      }
    }


}


int main()
{
    //enter list connections
    int x;
    for(int i = 0 ; i < 5 ;)
    {
        cout << "For node " << i << " : ";
        cin >> x;
        if(x == 9)  // to indicate no more out going links
            i++;
        else
            v[i].push_back(x);
    }

    int source;
    cout << "Enter source : " << endl;
    cin >> source;

    vis[source] = 1;
    levels[source] = 0;
    bfs(source);

    for(int i = 0; i < 5; i++)
        cout << "Node " << i << " Level : " << levels[i] << endl;

}
