#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

struct node
{
    char data;

    node* left;
    node* right;


};
int counter=0;
void solve(node* guide,char s1[],char s2[], ll length_a , ll length_b, ll mover_a,ll mover_b)
{
    // make bst
    if(mover_a==length_a && mover_b==length_b)
    {
        //stop

        guide->left=NULL;
        guide->right=NULL;
       //cout<<"\nONE BRANCH\n";
    }
    else
    {
        node temp;
        temp.left=NULL;
        temp.right=NULL;

        if(mover_a!=length_a)
        {
          temp.data = s1[mover_a];
          guide->left= &temp;
          //cout<<" left "<<temp.data<<" "<<++counter<<" ";

          solve(guide->left,s1,s2,length_a,length_b,mover_a+1,mover_b);

        }

        if(mover_b!=length_b)
        {
          temp.data = s2[mover_b];
          guide->right= &temp;
          //cout<<"right "<<temp.data<<" "<<++counter<<" ";
          solve(guide->right,s1,s2,length_a,length_b,mover_a,mover_b+1);

        }

    }




}



int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {

    ll length_a,length_b;
    cin>>length_a>>length_b;

    char s1[5001];
    char s2[5001];
    cin>>s1>>s2;

    node root;
    root.left=NULL;
    root.right=NULL;
    root.data=' ';

    solve(&root,s1,s2,length_a,length_b,0,0);
   // cout<<'\n'<<"DONE"<<'\n';
    cout<<"Time?";
    }



    return 0;
}
