#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class child
{
public:
    int x,y,k,l;
    void input()
    {
        cin>>x>>y>>k>>l;
    }

};

/*void refresh_distance(int distances[],child children[],int n,int position)
{
    for(int i=0;i<n;i++)
    {
        float x_square=pow(children[i].x,2.0);
        float y_square=pow(children[i].y,2.0);
        float distance=sqrt(x_square+y_square);
        distances[i]=distance;
    }

}

int minimum_distance(int distances[],child children[],int n,int position)
{
    int next_position;
    int mini=20000;
    for(int i=0;i<n;i++)
    {
        if(distances[i]<mini)
        {
            mini=distances[i];
            next_position=i;
        }
    }

    return next_position;
}*/
inline int freenode(child children[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(children[i].k!=0)
        {
            return i;
        }
    }
    return -1;

}
inline void solve(int n,child children[])
{
    bool done[n];
    memset(done,false,sizeof(done));
    int position=0;

    int gift_have;
    int node;
    int counter=0;
    gift_have=children[0].k;
    cout<<"2 "<<children[0].l<<'\n';
    cout<<"1 1\n";
    cout<<"3 "<<children[0].l<<'\n';
    cout<<"2 "<<children[0].k<<'\n';
    children[0].k=0;
    counter++;
    int i;
    while(counter!=n)
    {  int coming_counter=counter;
         for( i=1;i<n;i++)
        {
            if(children[i].l==gift_have&& children[i].k!=0)
            {
              position=i;
              cout<<"1 "<<i+1<<'\n';
              cout<<"3 "<<gift_have<<'\n';
              gift_have=children[i].k;
              cout<<"2 "<<children[i].k<<'\n';
              children[i].k=0;
              counter++;
              break;
            }
        }
       // 1021 2031 0154 3013 0251
        if(coming_counter==counter)
        {
            position=freenode(children,n);
            if(position==-1)
                break;
            cout<<"1 0"<<'\n';
            cout<<"3 "<<gift_have<<'\n';

            cout<<"2 "<<children[position].l<<'\n';
            cout<<"1 "<<position+1<<'\n';
            cout<<"3 "<<children[position].l<<'\n';
            cout<<"2 "<<children[position].k<<'\n';
            gift_have=children[position].k;
            children[position].k=0;
            counter++;
        }

    }

    cout<<"1 0\n";
    cout<<"3 "<<gift_have<<'\n';
    cout<<"0\n";

}
int main()
{
    ios::sync_with_stdio(false);
    //optimization

    int t;
    cin>>t;
    while(t--)
    {
        int n,g,b,x,y;
        cin>>n>>g>>b>>x>>y;
        int volume_of_presents[g];
        int volume_santa_bag[g];
        for(int i=0;i<g;i++)
            {cin>>volume_of_presents[i];}
     //       volume_santa_bag[i]=0;}

        child children[n];

        for(int i=0;i<n;i++)
            children[i].input();

      //  int distance_from_current[n];
        //int position=0;
    //    refresh_distance(distance_from_current,children,n,position);
        /*for(int i=0;i<n;i++)
        {
            cout<<"2 "<<children[i].l<<'\n';
            cout<<"1 "<<i+1<<'\n';
            cout<<"3 "<<children[i].l<<'\n';
            cout<<"2 "<<children[i].k<<'\n';
            cout<<"1 0"<<'\n';
            cout<<"3 "<<children[i].k<<'\n';
        }
        cout<<"0\n";

        int path[1000];
        memset(path,0,sizeof(path));
        */
        solve(n,children);
    }
    return 0;
}
