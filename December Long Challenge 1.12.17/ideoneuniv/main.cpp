#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll cost1(ll x,ll y,ll z,ll a,ll b,ll c){
    ll energy=0;
    return (x+y+z)*a;
}

ll cost2(ll x,ll y,ll z,ll a,ll b,ll c){
    ll energy = 0;

    if(x>y){
        ll t=x;
        x=y;
        y=t;

    }
    if(y>z){
        ll t=y;
        y=z;
        z=t;
    }
    if(x>y){
        ll t=x;
        x=y;
        y=t;
    }
    if(x+y<=z){
        energy+=(x+y)*b;
        z=z-(x+y);
        x = 0;
        y=0;
        energy+=cost1(x,y,z,a,b,c);
        return energy;
    }else {
        energy+=(y-x)*b;
        z = z-(y-x);
        y = y-(y-x);
    }
    if(x+y<=z){
        energy+=(x+y)*b;
        z=z-(x+y);
        x = 0;
        y=0;
        energy+=cost1(x,y,z,a,b,c);
        return energy;
    }else {
        if((x+y+z)%2!=0){
        energy+=(z+x+y)/2*b-b;
        x=y=z=1;}
        else {
            energy += (z+x+y)/2*b;
            return energy;
        }
    }
    if(x==y&&y==z&&(x>2)){
        energy+=(x-2)/2*3;
        if(x%2==0){
            x=y=z=2;
        }else {
            x=y=z=1;
        }
    }
    if(x==2&&y==2&&z==2){
        return energy+3*b;
    }

    if(x!=0&&y!=0&&z!=0){
        energy += min(a+b,min(c,3*a));
        x=x-1;
        y=y-1;
        z=z-1;}
    energy+=cost1(x,y,z,a,b,c);
    return energy;
}

ll cost3(ll x,ll y,ll z,ll a,ll b,ll c){
    ll q =min(x,min(y,z));
    ll energy=0;
    energy+=q*c;
    x=x-q;
    y=y-q;
    z=z-q;
    energy+=min(cost2(x,y,z,a,b,c),cost1(x,y,z,a,b,c));
    return energy;
}

int main() {
  ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll a, b, c, x, y, z;
        cin >> x >> y >> z ;
        cin >> a >> b >> c;
        cout<<min(cost1(x,y,z,a,b,c),min(cost2(x,y,z,a,b,c),cost3(x,y,z,a,b,c)))<<endl;
    }
}
