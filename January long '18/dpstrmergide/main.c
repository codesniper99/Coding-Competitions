#include <bits/stdc++.h>
    using namespace std;
    //long long dp[5001][5001][27];

     int cal(char *s,char *s1,long long n,long long m,int*** dp,int last){


    	if(n==0 && m==0)
    	return 0;

    	if(n==0){
    	    long long sum=0;
    	     if(last!=(s1[0]-'a'+1))
    	         sum=sum+1;
    		for(int i=0;i<m-1;i++){
    			if(s1[i]!=s1[i+1])
    			sum++;
    		}

    			return sum;
    		}
    	if(m==0){
    	    long long sum=0;
    	    if(last!=(s[0]-'a'+1) )
    	       sum=sum+1;


    		for(int i=0;i<n-1;i++){
    			if(s[i]!=s[i+1])
    			sum++;
    		}

    			return sum;
    		}

    		if(dp[n][m][last]!=-1)
    		  return dp[n][m][last];


    		long long l=INT_MAX;
    	    long long b=INT_MAX;
    	    long long c=INT_MAX;

     //if first character same then take character from both string;
       if(s1[0]==s[0]){
       	    int value=s[0]-'a'+1;

       	    if(last==value || last==0){
       	    	l=cal(s+1,s1+1,n-1,m-1,dp,value);
       	    }

          	else{
       	      l=1+cal(s+1,s1+1,n-1,m-1,dp,value);

       	    }
       }

       //if first character not same in either take character from s or s1
       	 if(s1[0]!=s[0]){

       	    int value=s[0]-'a'+1;
       	    int value1=s1[0]-'a'+1;

       	if(last==value || last==0){
       	    	b=cal(s+1,s1,n-1,m,dp,value);
       	     }

       	   else{
       	      b=1+cal(s+1,s1,n-1,m,dp,value);
       	    }


       	    if(last==value1 ||last ==0){
       	    	c=cal(s,s1+1,n,m-1,dp,value1);
       	    }

       	   else{
       	      c=1+cal(s,s1+1,n,m-1,dp,value1);
       	    }


       	 }

       	 long long result=min(l,min(b,c));
     	 dp[n][m][last]=result;
       	 return result;
     }


    int main(){
        long long t;
        cin>>t;
       // string s,s1;
        long long n,m;
        while(t--){

            cin>>n>>m;
            char* s=new char[n];
            for(int i=0;i<n;i++){
            	cin>>s[i];
            }
             char* s1=new char[n];
             for(int i=0;i<m;i++){
            	cin>>s1[i];
            }
            //allocate memory
           int*** dp = new int**[n+1];
      for(int i = 0 ; i <=n ; i++){
        dp[i] = new int*[m+1];
        for(int j = 0 ; j <= m ; j++){
          dp[i][j] = new int[27];
          for(int k = 0 ; k <27 ; k++){
            dp[i][j][k] = -1;
          }
        }

      }
        cout<<1+cal(s,s1,n,m,dp,0)<<endl;

        //deallocate memory
         for(int i = 0 ; i <=n ; i++){
        for(int j = 0 ; j <= m ; j++){
          delete [] dp[i][j];
        }
        delete [] dp[i];
      }
      delete [] dp;


       }
      }
