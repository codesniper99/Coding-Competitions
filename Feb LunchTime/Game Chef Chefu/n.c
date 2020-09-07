
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector< pair<li,li> > cards(n);
        vector<li>b(k);

        for(ll i=0;i<n;i++)
        {
            cin>>cards[i].first;

        }

        for(ll i=0;i<n;i++)
        {
            cin>>cards[i].second;

        }

        for(ll i=0;i<k;i++)
        {
            cin>>b[i];

        }


        ll sum_cards=0;
        ll total_cards=0;
        for(ll i=0;i<n;i++)
        {

            total_cards+=cards[i].second;
        }
        ll cards_to_go=0;

        sort(cards.begin(),cards.end());
     /*   for(ll i=0;i<n;i++)
            cout<<cards[i].first<<" - "<<cards[i].second<<'\n';
        cout<<'\n';
*/

        for(ll round_no=1;round_no<=k;round_no++)
        {
            cards_to_go=total_cards-b[round_no-1];
            //Maximizer
            if(round_no%2==1)
            {
                 ll left_index=0;

                while(cards_to_go!=0)
                {
                    //cout<<cards_to_go<<" ";
                    if(cards[left_index].second==0)
                    {
                        left_index++;
                    }
                    else
                    {
                        ll diff=cards_to_go-cards[left_index].second;
                        if(diff<=0)
                        {
                            cards[left_index].second=cards[left_index].second-cards_to_go;
                            cards_to_go=0;

                        }
                        else
                        {
                            cards_to_go-=cards[left_index].second;
                           cards[left_index].second=0;
                                  left_index--;

                            }

                    }



                }
                total_cards=b[round_no-1];
            }
            //Minimizer
            else if(round_no%2==0)
            {

            cards_to_go=total_cards-b[round_no-1];
ll right_index=n-1;
                while(cards_to_go!=0)
                {
                   // cout<<'s'<<total_cards<<' '<<b[round_no-1]<< ' '<<cards_to_go<<' '<<round_no<< ' ';

                   // cout<<right_index<<' '<<cards[right_index].second<<'e'<<' ';
                    if(cards[right_index].second==0)
                    {
                        right_index--;
                    }
                    else
                    {
                        ll diff=cards_to_go-cards[right_index].second;
                        if(diff<=0)
                        {
                            cards[right_index].second-= cards_to_go;
                         cards_to_go=0;

                        }
                        else
                        {

                            cards_to_go -=cards[right_index].second;
                           cards[right_index].second=0;
                                  right_index--;


                        }

                    }



                }
                  total_cards=b[round_no-1];



            }




        }


        //Sum
         for(ll i=0;i<n;i++)
        {
            sum_cards+=cards[i].first * cards[i].second;

        }
        cout<<sum_cards<<'\n';
//for(ll i=0;i<n;i++)
  //          cout<<cards[i].first<<" - "<<cards[i].second<<'\n';
    //    cout<<'\n';

    }

    return 0;
}
