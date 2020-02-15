#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    double dl,dh,dr,k;
    while(1){

        cin>>dh>>dl>>dr>>k;

        if(dl==0&&dh==0&&dr==0&&k==0)
            return 0;
        double mid,left,right;

        left=0;
        right=dr;
        mid=(left+right)/2;

        double hyp1 = sqrt(pow(dh,2.0)+pow(mid,2.0));
        double hyp2= sqrt(pow(dl,2.0)+pow(dr-mid,2.0));
        cout<<hyp1<<" "<<hyp2;
        double lastans,ans;
        double distancee;
        do
        {
            double left_ans;
            double right_ans;

            double left_l=left;
            double right_l=mid;
            double mid_l=(left_l+right_l)/2;
            double hyp3 = sqrt(pow(dh,2.0)+pow(mid_l,2.0));
            double hyp4=sqrt(pow(dl,2.0)+pow(dr-mid_l,2.0));

            left_ans=hyp3+k*hyp4;

            double left_r=mid;
            double right_r=right;
            double mid_r=(left_r+right_r)/2;
            double hyp5 = sqrt(pow(dh,2.0)+pow(mid_r,2.0));
            double hyp6=sqrt(pow(dl,2.0)+pow(dr-mid_r,2.0));

            right_ans=hyp5+k*hyp6;

            hyp1 = sqrt(pow(dh,2.0)+pow(mid,2.0));
            hyp2 = sqrt(pow(dl,2.0)+pow(dr-mid,2.0));

            ans=hyp1+hyp2*k;

             distancee = hyp1+hyp2;
            cout<<" L "<<left_ans<<" , "<<ans<<" , "<<right_ans<<" r ";
            if(left_ans<=ans)
            {
                right=mid;
                lastans=ans;
                ans=left_ans;

            }
            else if(right_ans<ans)
            {
                left=mid;
                lastans=ans;
                ans=right_ans;

            }
            cout<<" k "<<lastans<<" "<<ans<<"\n";

        }while(abs(lastans-ans)>0.00001);

        cout<<distancee<<"\n";

    }


    return 0;
}
