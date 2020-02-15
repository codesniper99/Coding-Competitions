#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
int main(){
 ll t;
cin>>t;
while(t--)
{
ll n , m , i=0,var=0,x,y;
cin>>n>>m;
x=n;
y=m;
ll abb[n] , bb[n],arra[m];
while(x--)
{
cin>>abb[i];
cin>>bb[i];
i++;
}
ll j=0;
while(y--)
{
cin>>arra[j];
j++;
}

for(ll i=0;i<m;i++)
{
    ll min=INT_MAX;
for(ll  j=0;j<n;j++)
{
if(arra[i]>=abb[j]&&arra[i]<bb[j]);
cout<<"0"<<"\n";

}
for(ll  j=0;j<n;j++)
{
if(arra[i]<abb[j]&&arra[i]>bb[j]);
    var++;

if(var==n)
    cout<<"-1"<<"\n";
}
for(long long j=0;j<n;j++)
{
if((bb[j]-arra[i])<min && (bb[j]-arra[i])>0)
{
    min=bb[j]-arra[i];
}

}
cout<<min<<"\n";

}
}
/****************/
return 0;
}
