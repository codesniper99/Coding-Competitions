#include <iostream>
#include<stdio.h>
#include<vector>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        vector<ll>strengths(n);

        for(ll i=0;i<n;i++)
            cin>>strengths[i];
        sort(strengths.begin(),strengths.end());

     //   for(ll i=0;i<n;i++)
     //       cout<<strengths[i]<<" ";
       // cout<<'\n';

        ll left=0;
        ll right=0;

        vector<ll>answer(n);
        answer.clear();


        for(ll i=0;i <n;i++)
        {
            vector<ll>draft(n);
            if(i<n/2)
            {
                left=i-1;
                right=i;
                ll sum=0;
            for(ll j=n-1;j>=0;j--)
            {
                if(sum<p)
                {
                    if(j>=i)
                    {
                        draft[right]= strengths[j];
                        right++;
                        sum+=strengths[j];
                    }
                    else
                    {
                       draft[left]=strengths[j];
                       left--;

                    }

                }

                else
                {

                if(left>=0 && right <=n-1)
                {

                        draft[left]=strengths[j];
                        draft[right]=strengths[j-1];
                        left--;
                        right++;
                        j--;

                }
                else if(left<0 )
                {
                    draft[right]=strengths[j];
                    right++;

                    if(j == 1)
                    {
                        j=j-1;
                        draft[right]=strengths[j];
                    }

                }
                else if(right>n-1)
                {
                    draft[left]=strengths[j];
                    left--;
                    if(j == 1)
                    {
                        j=j-1;
                        draft[left]=strengths[j];
                    }


                }


        }
        }
            }
        else
        {

                left=i;
                right=i+1;
                ll sum=0;
            for(ll j=n-1;j>=0;j--)
            {
                if(sum<p)
                {
                    if(n-1-j<=i)
                    {
                        draft[left]= strengths[j];
                        left--;
                        sum+=strengths[j];
                    }
                    else
                    {
                       draft[right]=strengths[j];
                       right++;

                    }

                }

                else
                {

                if(left>=0 && right <=n-1)
                {

                        draft[left]=strengths[j];
                        draft[right]=strengths[j-1];
                        left--;
                        right++;
                        j--;

                }
                else if(left<0 )
                {
                    draft[right]=strengths[j];
                    right++;

                    if(j == 1)
                    {
                        j=j-1;
                        draft[right]=strengths[j];
                    }

                }
                else if(right>n-1)
                {
                    draft[left]=strengths[j];
                    left--;
                    if(j == 1)
                    {
                        j=j-1;
                        draft[left]=strengths[j];
                    }


                }


             }
          }
        }
        // set dragons
        ll sumr=0;
     //   cout<<"set\n";
     //   for(ll b=0;b<n;b++)
    //        cout<<draft[b]<<" ";
     //       cout<<'\n';
        //right
        for(ll k=i;k<n;k++)
        {
            sumr+=draft[k];
            draft[k]=sumr;
        }

        ll suml=0;
        //left
        for(ll k=i;k>=0;k--)
        {
            suml+=draft[k];
            draft[k]=suml;
        }

      //  cout<<"progress\n";
      //  for(ll b=0;b<n;b++)
      //      cout<<draft[b]<<" ";
      ////      cout<<'\n';

        ll total=0;
        for(ll counter=0;counter<n;counter++)
        {
            if(draft[counter]>=p)
                total++;

        }
       // cout<<"\ncounted = "<<total<<"\n";
        answer[i]=total;
        }

       // cout<<"\nAnswer = \n";
        for(ll b=0;b<n;b++)
            cout<<answer[b]<<" ";
        cout<<'\n';
    }

    return 0;
}
