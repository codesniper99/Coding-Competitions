#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

    int mat[1001][1001];
    char sol[1001][1001];
ll n,m;

struct Point_d
{
    ll x;
    ll y;
    ll value;
};

struct Point
{
    ll x;
    ll y;
};

// An Data Structure for queue used in BFS
struct queueNode
{
    Point pt;  // The cordinates of a cell
    ll dist;  // cell's distance of from the source
};

// check whether given cell (row, col) is a valid
// cell or not.
bool isValid(ll row, ll col)
{
    // return true if row number and column number
    // is in range
    return (row >= 0) && (row < n) &&(col >= 0) && (col < m);
}

// These arrays are used to get row and column
// numbers of 4 neighbours of a given cell
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};

// function to find the shortest path between
// a given source cell to a destination cell.


ll BFS(Point src, Point dest)
{
    if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
        return LONG_LONG_MAX;

    bool visited[n][m];
    memset(visited, false, sizeof visited);

    // Mark the source cell as visited
    visited[src.x][src.y] = true;

    // Create a queue for BFS
    queue<queueNode> q;

    // distance of source cell is 0
    queueNode s = {src, 0};
    q.push(s);  // Enqueue source cell

    // Do a BFS starting from source cell
    while (!q.empty())
    {
        queueNode curr = q.front();
        Point pt = curr.pt;

        // If we have reached the destination cell,
        // we are done
        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;

        // Otherwise dequeue the front cell in the queue
        // and enqueue its adjacent cells
        q.pop();

        for (ll i = 0; i < 4; i++)
        {
            ll row = pt.x + rowNum[i];
            ll col = pt.y + colNum[i];

            // if adjacent cell is valid, has path and
            // not visited yet, enqueue it.
            if (isValid(row, col) && mat[row][col] &&
               !visited[row][col])
            {
                // mark cell as visited and enqueue it
                visited[row][col] = true;
                queueNode Adjcell = { {row, col},
                                      curr.dist + 1 };
                q.push(Adjcell);
            }
        }
    }

    //return -1 if destination cannot be reached
    return LONG_LONG_MAX;
}

inline char solve(Point src,vector<Point_d>Destinations,ll mover)
{
    ll counter=0;ll flag=0;
    while(counter!=mover)
    {
        Point Temp;
        Temp.x=Destinations[counter].x;
        Temp.y=Destinations[counter].y;

      ll dist=BFS(src,Temp);
//cout<<"Source - "<<src.x<<", "<<src.y<<"    Desti - "<<Destinations[counter].x<<", "<<Destinations[counter].y<<"     \n";
//cout<<"Distance - "<<dist<<"\n";
    if (dist != LONG_LONG_MAX)
        {
            if(dist <= Destinations[counter].value)
            {
                flag=1;
                break;
            }
            else
            {
                counter++;
                continue;
            }
        }

    else
        {
            counter++;
            continue;
        }


    }

    if(flag==1)
        return 'Y';

    else
        return 'N';

}

// Driver program to test above function
int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin>>t;


    while(t--)
{
     //int n,m;
     cin>>n>>m;
    ll counter=0;
    for(int i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            {
                cin>>mat[i][j];
             if(mat[i][j]>0)
             {
                 if(mat[i][j]==1)
                    mat[i][j]=-2;

                 counter++;
             }
             if(mat[i][j]==0)
                mat[i][j]=1;

             else if(mat[i][j]==-1)
                mat[i][j]=0;

            }
    }

for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<m;j++)
        sol[i][j]='N';
    }

     vector<Point_d> Destinations(counter);
     ll mover=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            {
     //           cin>>mat[i][j];
             if(mat[i][j]>1)
             {

            Destinations[mover].x=i;
            Destinations[mover].y=j;
            Destinations[mover].value=mat[i][j];
            mat[i][j]=1;
            sol[i][j]='Y';
            mover++;

             }
             else if(mat[i][j]==-2)
             {
              Destinations[mover].x=i;
              Destinations[mover].y=j;
              Destinations[mover].value=1;

              mat[i][j]=1;
              sol[i][j]='Y';
              mover++;

             }

            }
    }

  //  for(ll i=0;i<mover;i++)
   // {
    //    cout<<"  k  " <<Destinations[i].x<<" "<<Destinations[i].y<<" "<<Destinations[i].value<<"  k ";
    //}

//cout<<"\n";
/*for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<m;j++)
        cout<<mat[i][j]<<" ";
       cout<<'\n';
   }
cout<<"\n\n";
  */  for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
         if(mat[i][j]==0)
         {
             sol[i][j]='B';
         }

         else if(mat[i][j]==1 )
         {
           Point source;
           source.x=i;
           source.y=j;
           char ch = solve(source,Destinations,mover);
           sol[i][j]=ch;
         }


        }
    }


//   cout<<"\nARRAY\n";
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<m;j++)
        cout<<sol[i][j];
       cout<<'\n';
   }


   }
    return 0;
}
