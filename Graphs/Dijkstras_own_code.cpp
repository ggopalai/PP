#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int weights[10][10]; // weight matrix
int connect[10][10]; // conneectios matrix
int visited[10] = {0}; // visited history
int min_distance[10]; // minimum distances from source
int parent[10]; // parent node

void dijkstras(int source, int n)
{
    int count_nodes = 0;
    visited[source] = 1;
    while(count_nodes < n) // stops after it reaches each nodes once
    {
        visited[source] = 1;
        for(int i = 0; i < n ; i++)
        {
            if(connect[source][i] == 1) // neighbouring node
            {
                if( min_distance[source] + weights[source][i] < min_distance[i]) //relaxing the nodes
                {
                    min_distance[i] = min_distance[source] + weights[source][i];
                    parent[i] = source;
                }
            }
        }

        //need to choose least weight
        int mil = 999;
        int int_source;
        for(int i = 0; i < n ; i++)
        {
            if( connect[source][i] == 1 && visited[i] == 0 )
                if(min_distance[i] < mil)
            {
                mil = min_distance[i];
                int_source = i;     // next node to traverse
            }
        }

        source = int_source;

        count_nodes++;
    }

}

int main()
{
    int n;
    cout << "Enter number of nodes : " << endl;
    cin >> n;
    int source;
    cout << "Enter source : " << endl;
    cin >> source;

    cout << "enter connections " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n ; j++)
           cin >> connect[i][j];

    //

    cout << "Enter weights : " << endl;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n ; j++)
           cin >> weights[i][j];

    //initialize min distances
    for(int i = 0; i < n; i++)
    {
       min_distance[i] = 999;
    }

    min_distance[source] = 0;

    dijkstras(source,n);

    cout << "Final graph : " << endl;


    cout << "Node :     Distance :       Parent : " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << i << "     " << min_distance[i] << "     " << parent[i] <<  endl;
    }


}
