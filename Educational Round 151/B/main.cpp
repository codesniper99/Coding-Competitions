#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--) {
        ll xa, ya, xb, yb, xc, yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        if(xa>0){
            xa-=0.5;
        } else if (xa<0){
                xa+=0.5;

        } else ;

        if(ya>0){
            ya-=0.5;
        } else if(ya<0) {
            ya+=0.5;
        } else;


        //Coral center in terms of coordinate axes
        if(xb>0){
            xb-=0.5;
        } else if (xb<0){
                xb+=0.5;

        } else ;

        if(yb>0){
            yb-=0.5;
        } else if(yb<0) {
            yb+=0.5;
        } else;


        //Coral center in terms of coordinate axes
        if(xc>0){
            xc-=0.5;
        } else if (xc<0){
                xc+=0.5;

        } else ;

        if(yc>0){
            yc-=0.5;
        } else if(yc<0) {
            yc+=0.5;
        } else;



        xb-=xa;
        yb-=ya;
        xc-=xa;
        yc-=ya;



        // compare

        ll shortest = 1;
        if(xb*xc>0){
                if(xb<0){
                    shortest += -max(xb,xc);
                } else{

                    shortest+=min(xb,xc);
                }
        }
        if(yb*yc>0){
                if(yb<0){
                    shortest += -max(yb,yc);
                } else{

                    shortest+=min(yb,yc);
                }
        }
        cout<<shortest<<'\n';
    }


    return 0;
}
