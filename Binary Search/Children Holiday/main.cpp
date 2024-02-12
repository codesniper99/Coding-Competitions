#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
// incomplete
using namespace std;

struct assistant {
    ll t,y,z;

};

ll booksMade(ll timee, vector<assistant> &a){

    ll totalBooks = 0;
    ll sizee = a.size();
    for(ll i=0;i<sizee;i++){
        totalBooks+= a[i].t/(a[i].t + floor(a[i].y/a[i].z));;

    }
    return totalBooks;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll m,n;
    cin>>m>>n;
    vector<assistant> a(n);
    ll maxx = 0, ind=0;
    for(ll i=0;i<n;i++){
        cin>>a[i].t>>a[i].z>>a[i].y;
        maxx = (a[i].t>maxx?(maxx = a[i].t, ind = i): maxx);
    }

    ll l = 0, r = maxx*m + ceil(m/a[ind])*(a[ind].y);

    while(l<r){
        ll timee = l + (r-l)/2;

        if( booksMade(timee, assistant) >= m){
            r = timee;
        } else {
            l = timee +1;
        }


    }
    cout<<timee<<'\n';


    return 0;
}
