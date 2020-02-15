// simple program using seg tree and lazy prop to find sum over range and updation

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

struct tree{
    ll l,r;
    ll sum;

};

 tree t[50];
 void build( int node, int n, vector<ll> a ,int start,int endd  )
 {
     if(n<=0)
        return ;

     if(start==endd)
     tree[node]=a[start];

     else
     {
         int mid=(start+endd)/2;
         build(node*2,n,a,start,mid);
         build(node*2+1,n,a,mid+1,endd);
         //assign
         tree[node]=tree[node*2]+tree[node*2+1];
     }

 }

    update( int node,int n, vector<ll> a,int start , int endd, int id, int val)
    {



    }


    query(int node, int n,vector<ll> a,int l, int r,int start,int endd)
    {
      if(l==r)
        return a[l];
      else
     {
        if(start<l && endd>r)
            return tree[node];
        else
        {
            int mid=(start+endd)/2;


        }


     }


    }



int main()
{
    ios::sync_with_stdio(0);

    ll n;
    cin>>n;
    vector<ll>a(n);

    for(ll i=0;i<n;i++)
        cin>>a[i];

    ll q;
    cin>>q;
    // 0 l r
    // 1 position
    build(0,n,a,0,n-1);

    while(q--)
    {
        ll choice=2;
        cin>>choice;
        if(choice==0)
        {
          ll l,r;
          cin>>l>>r;

        }

        else if(choice==1)
        {
          ll position;
          cin>>position;


        }


    }

    return 0;
}
