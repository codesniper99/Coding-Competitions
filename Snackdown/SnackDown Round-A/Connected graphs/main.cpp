//Solvedd

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int
 ll counter=0;
using namespace std;
// Graph class represents a undirected graph
// using adjacency list representation
class Graph
{
    ll V;    // No. of vertices

    // Pointer to an array containing adjacency lists
    list<ll> *adj;

    // A function used by DFS
    void DFSUtil(ll v, bool visited[]);
public:
    Graph(ll V);   // Constructor
    void addEdge(ll v, ll w);
    void connectedComponents();
};

// Method to print connected components in an
// undirected graph
void Graph::connectedComponents()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(ll v = 0; v < V; v++)
        visited[v] = false;

    for (ll v=0; v<V; v++)
    {
        if (visited[v] == false)
        {
            // print all reachable vertices
            // from v
            DFSUtil(v, visited);
           counter++;
            //cout << "\n";
        }
    }
}

void Graph::DFSUtil(ll v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    //cout << v << " ";

    // Recur for all the vertices
    // adjacent to this vertex
    list<ll>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}

Graph::Graph(ll V)
{
    this->V = V;
    adj = new list<ll>[V];
}

// method to add an undirected edge
void Graph::addEdge(ll v, ll w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

// Drive program to test above
int main()
{

    ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {

    counter=0;
       ll n;
       cin>>n;
        vector<ll>arra(n);
       for(ll i=0;i<n;i++)
       {
           cin>>arra[i];
       }


    // Create a graph given in the above diagram
    Graph g(n);

    //g.addEdge(1, 0);
    //g.addEdge(0,1);
   // g.addEdge(2, 3);
    //g.addEdge(3, 4);
//cout<<"YO";
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {

            if(__gcd(arra[i],arra[j])==1)
                g.addEdge(i,j);
            else
                continue;


        }

    }
    g.connectedComponents();
    if(counter==1)
        {//cout<<"operations = 0\n";
            cout<<"0\n";
          for(ll i=0;i<n;i++)
            cout<<arra[i]<<' ';
          cout<<'\n';

        }
    else
        {
            //cout<<"Operations= 1\n";
            cout<<"1\n";

            if(arra[n-1]==29)
                arra[n-1]=31;
            else if(arra[n-1]==31)
                arra[n-1]=37;
            else if(arra[n-1]==37)
                arra[n-1]=41;
            else if(arra[n-1]==41)
                arra[n-1]=43;
            else if(arra[n-1]==43)
                arra[n-1]=47;
            else if(arra[n-1]==47)
                arra[n-1]=29;
            else
                arra[n-1]=31;

            for(ll i=0;i<n;i++)
             cout<<arra[i]<<' ';
            cout<<'\n';
        }
    }
    return 0;
}

