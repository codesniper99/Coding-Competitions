// String Merging
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
// Dynamic programmin bruv
int arra[5001][5001][27];
int Answer(char *s,char *s1,ll length_a,ll length_b,int arra[5001][5001][27],int last_char)
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

    		if(arra[length_a][length_b][last_char]!=-1)
    		  return arra[length_a][length_b][last_char];


    		ll p=INT_MAX;
    	    ll q=INT_MAX;
    	    ll r=INT_MAX;

     //if first character same then take character from both string;
       if(s1[0]==s[0])
        {
       	    int s_value=s[0]-'a'+1;

       	    if(last_char==s_value || last_char==0)
            {
       	    	p=Answer(s+1,s1+1,length_a-1,length_b-1,arra,s_value);
       	    }

          	else
            {
       	      p=1+Answer(s+1,s1+1,length_a-1,length_b-1,arra,s_value);
       	    }
       }

       //if first character not same in either take character from s or s1
       	 if(s1[0]!=s[0])
            {

       	    int s_value=s[0]-'a'+1;
       	    int s1_value=s1[0]-'a'+1;

       	if(last_char==s_value || last_char==0)
            {
       	    	q=Answer(s+1,s1,length_a-1,length_b,arra,s_value);
       	     }

       	   else
            {
       	        q=1+Answer(s+1,s1,length_a-1,length_b,arra,s_value);
       	    }


       	    if(last_char==s1_value ||last_char ==0){
       	    	r=Answer(s,s1+1,length_a,length_b-1,arra,s1_value);
       	    }

       	   else
            {
       	      r=1+Answer(s,s1+1,length_a,length_b-1,arra,s1_value);
       	    }


       	 }

       	 ll result=min(p,min(q,r));
     	 arra[length_a][length_b][last_char]=result;

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

            char* s=new char[length_a];

            for(int i=0;i<length_a;i++)
            {
            	cin>>s[i];
            }

             char* s1=new char[length_b];

             for(int i=0;i<length_b;i++)
            {
            	cin>>s1[i];
            }

         // 3D
        // ye hai initialization

    // apna answer
        cout<<1+Answer(s,s1,length_a,length_b,arra,0)<<'\n';

  }
  return 0;
}
