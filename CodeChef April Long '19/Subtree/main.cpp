#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007
ll x;

bool isValid(ll row, ll col, ll board[50][50],ll rowmax,ll colmax)
{
    return ((row >= 0) && (row < rowmax) &&
           (col >= 0) && (col < colmax) && (board[row][col]==0) );
}
class Graph
{
    ll V;    // No. of vertices

    // Pointer to an array containing
    // adjacency lists
    list<ll> *adj;

    // A recursive function used by DFS
    ll DFSUtil(ll v, bool visited[],vector<ll>a);
public:
    Graph(ll V);   // Constructor

    // function to add an edge to graph
    void addEdge(ll v, ll w);

    // DFS traversal of the vertices
    // reachable from v
    void DFS(ll v, vector<ll>a);
};

Graph::Graph(ll V)
{
    this->V = V;
    adj = new list<ll>[V];
}

void Graph::addEdge(ll v, ll w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

ll Graph::DFSUtil(ll v, bool visited[],vector<ll>a)
{
    visited[v] = true;
   // cout << v << " ";
    ll sum=0;
    list<ll>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            {

               sum+= DFSUtil(*i, visited,a);

            }
    return max(-x, a[v]+sum);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(ll v, vector<ll>a)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (ll i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function
    // to print DFS traversal
    cout<<DFSUtil(v, visited,a)<<"\n";
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n>>x;
        Graph g(n);

        vi a(n);
        REP(i,0,n)
        {
            cin>>a[i];
        }
        ll u,v;
        REP(i,0,n-1)
        {
            cin>>u>>v;
            g.addEdge(u-1,v-1);
            g.addEdge(v-1,u-1);
        }

        g.DFS(0,a);


    }



    return 0;
}
