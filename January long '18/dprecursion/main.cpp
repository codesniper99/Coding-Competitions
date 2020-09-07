#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll length_a=5000,length_b=5000;
ll tc[5001][5001];


ll minCost(string a,string b, char last_char, ll iterator_a, ll iterator_b)
{
     ll i, j;


     if(iterator_b==length_b && iterator_a==length_a)
       {
            return 0;
       }


     if(iterator_b==length_b||iterator_a==length_a)
     {

       if(iterator_b==length_b)
       {


    	    ll sum=0;
    	    if(last_char!=(a[iterator_a]))
    	       sum=sum+1;


    		for(int i=iterator_a;i<length_a;i++)
            {
    			if(a[i]!=a[i+1])
    			 sum++;
    		}

    			return sum;

       }
       else if(iterator_a==length_a)
       {

    	    ll sum=0;
    	    if(last_char!=(b[iterator_b]))
    	       sum=sum+1;


    		for(int i=iterator_b;i<length_b;i++)
            {
                cout<<"yo ";
    			if(b[i]!=b[i+1])
    			 sum++;
    		}

    			return sum;

       }

     }



           if(tc[iterator_a][iterator_b]!=0)
    		  return tc[iterator_a][iterator_b];

            ll p=INT_MAX;
    	    ll q=INT_MAX;
    	    ll r=INT_MAX;

    	    if(a[iterator_a]==b[iterator_b])
            {

            char s_value=a[iterator_a];

       	    if(last_char==s_value || last_char=='0')
            {
       	    	p=minCost(a,b,s_value,iterator_a+1,iterator_b+1);
       	    }

          	else
            {
       	      p=1+minCost(a,b,s_value,iterator_a+1,iterator_b+1);
       	    }

            }

            if(a[iterator_a]!=b[iterator_b])
            {

       	    char s_value=a[iterator_a];
       	    char s1_value=b[iterator_b];

       	if(last_char==s_value || last_char=='0')
            {
       	    	q=minCost(a,b,s_value,iterator_a+1,iterator_b);
       	     }

       	   else
            {
       	        q=1+minCost(a,b,s_value,iterator_a+1,iterator_b);
       	    }


       	    if(last_char==s1_value ||last_char =='0'){
       	    	r=minCost(a,b,s1_value,iterator_a,iterator_b+1);
       	    }

       	   else
            {
       	      r=1+minCost(a,b,s1_value,iterator_a,iterator_b+1);
       	    }

            }
    	    ll result=min(p,min(q,r));
    	    tc[iterator_a][iterator_b]=result;

    	    return result;


}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;string ans;
    while(t--)
    {
        cin>>length_a>>length_b;
        string af,bf,c;
        cin>>af;
        cin>>bf;


        string a,b;
        a="0";
        a+=af;
        b="0";
        b+=bf;
   for(ll i=0;i<=length_a;i++)
   {
       for(ll j=0;j<=length_b;j++)
    tc[i][j]=0;

   }
   cout<< min(minCost(a,b,'0',1,0),minCost(a,b,'0',0,1));

   cout<<"\nARRAY\n";
   for(ll i=0;i<=length_a;i++)
   {
       for(ll j=0;j<=length_b;j++)
        cout<<tc[i][j]<<" ";
       cout<<"\n";
   }
    cout<<'\n';
    }
   return 0;

}
