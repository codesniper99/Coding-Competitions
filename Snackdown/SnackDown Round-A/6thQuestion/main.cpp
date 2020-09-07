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
        ll n;
        cin>>n;
        vector<ll> arra(n);
        for(ll i=0;i<n;i++)
            cin>>arra[i];




        vector<ll> positions;
        positions.clear();
        for(ll i=0;i<n;i++)
        {
            if(arra[i]>0)
                positions.push_back(i);

        }

        ll lower_pointer=0;
        ll upper_pointer=1;

        ll len=positions.size();
      ll flag=0;
      if(len>=2){
        for( upper_pointer=1;upper_pointer<len;upper_pointer++)
            {
                //1 -1 -1 4 1
      //          cout<<"POS<< \n"<<positions[upper_pointer]<<" "<<positions[lower_pointer]<<" "<<arra[positions[upper_pointer]]<<" "<<arra[positions[lower_pointer]]<<'\n';
                if( (arra[positions[upper_pointer]]>arra[positions[lower_pointer]])&&((positions[upper_pointer]-positions[lower_pointer])!=(arra[positions[upper_pointer]]-arra[positions[lower_pointer]])))
                    {
         //               cout<<"Yahoo\n";
                        flag=1;
                        break;
                    }
                else if(arra[positions[upper_pointer]]<arra[positions[lower_pointer]]&& ((arra[positions[upper_pointer]] - 1) >=(positions[upper_pointer]-positions[lower_pointer]) ))
                  {
            //            cout<<"Yahoo\n";
                        flag=1;
                        break;
                    }


                else
                {
                    lower_pointer++;

                }
//cout<<flag<<" "<<upper_pointer<<" "<<lower_pointer<<'\n';


            }

            if(flag==1)
            {
                cout<<"impossible\n";
                continue;
            }

      }

            vector<pair<ll,ll> >counts;
            map<ll,ll> counter;

            for(ll i=0;i<len;i++)
            {

               counter[arra[positions[i]]]++;

            }
            ll period=0;
            ll found=0;

            ll instance = 0;
            for(std::map<ll,ll>::iterator it=counter.begin(); it!=counter.end(); ++it)
            {
                if(it->second >=2)
                {
                     instance = it->first;
                      found=1;
                      break;
                }


            }
            if(found==1)
        {
            ll fl=0;
            ll low_bound=0;
            ll up_bound=0;
            for(ll i=0;i<len;i++)
            {
                if(arra[positions[i]]==instance)
                {
                    if(fl==0)
                    {
                        low_bound=positions[i];
                        fl++;
                    }
                    else if(fl==1)
                    {
                        up_bound=positions[i];
                        fl++;
                        break;
                    }
                }

            }
            ll answer = up_bound - low_bound;
            cout<<answer<<'\n';
            continue;
        }
        else
        {

        ll period_max=-999;
        lower_pointer=0;
            if(len>=2){
        for( upper_pointer=1;upper_pointer<len;upper_pointer++)
            {
                //1 -1 -1 4 1
                if( (arra[positions[upper_pointer]]>arra[positions[lower_pointer]])&&((positions[upper_pointer]-positions[lower_pointer])==(arra[positions[upper_pointer]]-arra[positions[lower_pointer]])))
                    {
                        if(arra[positions[upper_pointer]]>period_max)
                         period_max=arra[positions[upper_pointer]];

                         lower_pointer++;
                    }
                else if(arra[positions[upper_pointer]]<arra[positions[lower_pointer]]&& ((arra[positions[upper_pointer]] - 1) <(positions[upper_pointer]-positions[lower_pointer]) ))
                  {   //0 1   2  3  4 5
                      //4 -1 -1 -1 -1 4
                //      cout<<arra[positions[upper_pointer]]<<" "<<arra[positions[lower_pointer]]<<" "<<period_max<<" "<<((positions[upper_pointer]-positions[lower_pointer]-1 )- arra[positions[upper_pointer]]-1 +arra[positions[lower_pointer]] );
//cout<<(arra[positions[lower_pointer]]+arra[positions[upper_pointer]]-1)<<"n";
                       if(((positions[upper_pointer]-positions[lower_pointer]-1 )- (arra[positions[upper_pointer]]-1) +arra[positions[lower_pointer]] )>period_max)
                         period_max= (positions[upper_pointer]-positions[lower_pointer] -1)- (arra[positions[upper_pointer]]-1) + arra[positions[lower_pointer]];

                  lower_pointer++;
                  }


                else
                {
                    lower_pointer++;

                }
  //cout<<"POS<< \n"<<positions[upper_pointer]<<" "<<positions[lower_pointer]<<" "<<arra[positions[upper_pointer]]<<" "<<arra[positions[lower_pointer]]<<'\n';

            }

            }

            if(period_max>0)
                cout<<period_max<<'\n';
            else
                cout<<"inf\n";
            continue;

        }







    }

    return 0;
}
