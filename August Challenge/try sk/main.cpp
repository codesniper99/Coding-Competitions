#include<bits/stdc++.h>
using namespace std;
int main(){
long t, n,i,res,x,y,no;
cin>>t;
while(t--)
{
    cin>>n;
    no = n;
    i = (int)(log(n) / log(2))+1;
    if(pow(2,i)>n)
        i--;
    if(n==pow(2,i))
        cout<<1<<endl;
    else{
        n = n-pow(2,i);
        x = i;

    i = (int)(log(n) / log(2));
    res = n-pow(2,i)>pow(2,i+1)-n?pow(2,i+1)-n:n-pow(2,i);
    cout<<res<<endl;
    }
}
return 0;
}
