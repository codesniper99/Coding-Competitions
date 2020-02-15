// String Merging
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
// Dynamic programmin bruv

int arra[5001][5001];

int Answer(string s,string s1,ll length_a,ll length_b,int arra[5001][5001],int last_char, int iterator_s,int iterator_s1)
{
    	if(length_a==0 && length_b==0)
    	 return 0;

    	if(length_a==0)
        {
    	    ll sum=0;
    	     if(last_char!=(s1[0]-'a'+1))
    	         sum=sum+1;

    		for(int i=0;i<length_b-1;i++)
            {
    			if(s1[i]!=s1[i+1])
    			sum++;
    		}

    			return sum;
        }

    	if(length_b==0)
            {
    	    ll sum=0;
    	    if(last_char!=(s[0]-'a'+1) )
    	       sum=sum+1;


    		for(int i=0;i<length_a-1;i++)
            {
    			if(s[i]!=s[i+1])
    			sum++;
    		}

    			return sum;
    		}

        if(arra[length_a][length_b]!=0)
    		  return arra[length_a][length_b];


    		ll p=INT_MAX;
    	    ll q=INT_MAX;
    	    ll r=INT_MAX;

     //if first character same then take character from both string;
       if(s1[1]==s[1])
        {
       	    int s_value=s[1]-'a'+1;

       	    if(last_char==s_value || last_char==0)
            {
       	    	p=Answer(s,s1,length_a-1,length_b-1,arra,s_value);
       	    }

          	else
            {
       	      p=1+Answer(s,s1,length_a-1,length_b-1,arra,s_value);
       	    }
       }

       //if first character not same in either take character from s or s1
       	 if(s1[1]!=s[1])
            {

       	    int s_value=s[1]-'a'+1;
       	    int s1_value=s1[1]-'a'+1;

       	if(last_char==s_value || last_char==0)
            {
       	    	q=Answer(s,s1,length_a-1,length_b,arra,s_value);
       	     }

       	   else
            {
       	        q=1+Answer(s,s1,length_a-1,length_b,arra,s_value);
       	    }


       	    if(last_char==s1_value ||last_char ==0){
       	    	r=Answer(s,s1,length_a,length_b-1,arra,s1_value);
       	    }

       	   else
            {
       	      r=1+Answer(s,s1,length_a,length_b-1,arra,s1_value);
       	    }


       	 }

       	 ll result=min(p,min(q,r));
     	 arra[length_a][length_b]=result;

       	 return result;
     }


int main()

{
        ios::sync_with_stdio(0);
        ll t;
        cin>>t;
        ll length_a,length_b;

        while(t--)
            {
            cin>>length_a>>length_b;

             string s,s1;
            	cin>>s;
            	cin>>s1;
            string a,b;
            a="0";
            a+=s;
            b="0";
            b+=s1;

      for(int i = 0 ; i <=length_a ; i++)
     {

        for(int j = 0 ; j <= length_b ; j++)
        {
            arra[i][j] = 0;
          }
    }

    int iterator_s,iterator_s1;


        cout<<Answer(a,b,length_a,length_b,arra,0,0,0)<<'\n';

      for(int i = 0 ; i <=length_a ; i++)
     {

        for(int j = 0 ; j <= length_b ; j++)
        {
          cout<<  arra[i][j]<<" ";
          }
          cout<<'\n';
    }

            }
  return 0;
}
