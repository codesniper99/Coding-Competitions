#include<bits/stdc++.h>
using namespace std;
#define ctc ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
ll mode=1e9+7;
int main()
{

    ctc;
    ll int n,q;
    cin>>n>>q;
   ll int a[n];

    string s[n];
    bitset<31> b;
    for(ll int i=0;i<n;i++)
    {

        cin>>a[i];
        b=a[i];
        s[i]=b.to_string();

    }
   ll int l,r,ss=0,k=0;
    string c;
    for(ll int t=0;t<q;t++)
    {

        cin>>l>>r;
       // cout<<"l is"<<l<<"\n";
        //cout<<"r is "<<r<<"\n";
        k=r-l;
        k+=1;
        k=k/2;
        //cout<<"k is"<<k<<"\n";
        for(ll int j=30;j>=0;j--)
        {
        	ss=0;
            for(ll int i=l-1;i<=r-1;i++)
            {
                if(s[i][j]=='1')
                {
                	ss+=1;
                }



            }
            //cout<<"ss is"<<ss<<"\n";
            if(ss<=k)
                {
                	c[j]=49;
                }
                else
                {
                	c[j]=48;
                }

        }
       /* for(int i=0;i<31;i++)
        {
            cout<<c[i];
        }
        cout<<"\n";*/

        ll int  number;
        number = strtoll (c.c_str (),NULL,2);
        cout << number << " \n" ;

    }
    return 0;

}
