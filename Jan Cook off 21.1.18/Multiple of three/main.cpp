#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll sum=0;
int Threek=0,Threek1=0,Threek2=0;
     ll d1,d2,k;
     cin>>k>>d1>>d2;
        sum=d1+d2;
        ll x=sum;

        if(sum%3==0)
            Threek=1;
        else if(sum%3==1)
            Threek1=1;
        else
            Threek2=1;

        for(ll i=0;i<k-2;i++)
        {
            sum=sum%10;
            ll next=sum%10;
            if(next%3==0)
            {if(Threek==1)
                {Threek=1;
                 Threek1=0;
                 Threek2=0;
                }

              else if(Threek1==1)
                 {Threek=0;
                 Threek1=1;
                 Threek2=0;
                }
                else
                      {Threek=0;
                 Threek1=0;
                 Threek2=1;
                }


            }
            else if(next%3==1)
            {if(Threek==1)
                {Threek=0;
                 Threek1=1;
                 Threek2=0;
                }

              else if(Threek1==1)
                 {Threek=0;
                 Threek1=0;
                 Threek2=1;
                }
                else
               {Threek=1;
                 Threek1=0;
                 Threek2=0;
                }


            }

            else
            {if(Threek==1)
                {Threek=0;
                 Threek1=0;
                 Threek2=1;
                }

              else if(Threek1==1)
                 {Threek=1;
                 Threek1=0;
                 Threek2=0;
                }
                else
               {Threek=0;
                 Threek1=1;
                 Threek2=0;
                }


            }
            sum+=next;

        }
        if(Threek==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}
