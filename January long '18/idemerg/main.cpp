#include <bits/stdc++.h>
using namespace std;

 int * count(string a,string b,int x,int y){

    int ans[2];
    fill_n(ans,2,0);
    int temp=x;
    string tmp=a;
    int check=0;
    if(x<y) {
        x=y;
        a=b;
        b=tmp;
        y=temp;
            }

    for(int i=0;i<y;i++){
           for(int j=check;j<x;j++){
                  if(a.at(i)==b.at(j)){
                      ans[0]++;
                      check=j+1;
                      j=x;
                                       }
                                    }
                           }
   int check2=x-1;

    for(int i=y-1;i>=0;i--){
           for(int j=check2;j>=0;j--){
                  if(a.at(i)==b.at(j)){
                      ans[1]++;
                      check=j-1;
                      j=-1;
                                       }
                                    }
                           }
    return ans;

 }



int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string first,second;
        cin>>first>>second;
        char ch1=first.at(0);
        char ch2=second.at(0);
        string s1="";
        string s2="";
        s1=s1+ch1;
        s2=s2+ch2;
        for(int i=1;i<n;i++){
             if(first.at(i)!=first.at(i-1))  s1=s1+first.at(i);
        }

        for(int i=1;i<m;i++){
             if(second.at(i)!=second.at(i-1))  s2=s2+second.at(i);
        }
       int sum=0;
       sum=s1.size()+s2.size();

      int A[5000];
      A=count(s1,s2,n,m);

       if(A[0]>A[1])  sum=sum-A[0];
       else sum=sum-A[1];

         cout<<sum<<endl;


    }
}
