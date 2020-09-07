//SzOLLVVEEDD

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
		string s;
        cin >> s;
		ll len = s.length();
		char temp;
		//vector of pairs
		vector <pair <char,int> >arra;

		for(ll i =0; i< len;i++)
		{
			temp = s[i];
			arra.push_back(make_pair(temp,i+1));
		}
		sort(arra.begin(),arra.end());

		ll aux[len];
		ll counter=0,odd = 0,flag = 1,j = 0;

		for(ll i = 0;i < len;i++)
        {
            counter++;
            ll ans = arra[i].second;
            if(i < len-1)
            {
                char present_char = arra[i].first;
                char next_char = arra[i+1].first;
                if((present_char == next_char)&&(counter%2!= 0))
                {
                    aux[j] = ans;
                }
                else if((present_char == next_char)&&(counter%2 == 0))
                {
                    aux[len-j-1] = ans;
                    j++;
                    counter = 0;
                }
                else if((present_char!= next_char)&&(counter%2 == 0))
                {
                    aux[len-j-1] = arra[i].second;
                    counter = 0;
                    j++;
                }
                else if((present_char!= next_char)&&(counter%2 == 1))
                {
                    odd++;
                    if(len%2 == 0)
                    {
                        cout << "-1" << '\n';
                        flag = 0;
                        break;
                    }
                    else
                    {
                        if(odd > 1)
                        {
                        cout << "-1" << '\n';flag = 0;
                        break;
                        }
                        else
                        {
                            aux[len/2] = ans;
                        }
                    }
                    counter = 0;
                }

            }
            else if(i == len-1)
                {
                if((arra[len-2].first == arra[len-1].first)&&(counter%2 == 0))
                {
                    aux[len-j-1] = ans;
                }
                if(counter%2 == 1)
                {
                    odd++;
                    if(len%2 == 0)
                    {
                        cout << "-1" <<'\n';flag = 0;
                        break;
                    }
                    else
                    {
                        if(odd > 1)
                        {
                        cout << "-1" << '\n';flag = 0;
                        break;
                        }
                        else
                        {
                            aux[len/2] =  ans;
                        }
                    }
                    counter = 0;
                }
            }
		}
		if(flag == 1)
            {
            for(int i = 0;i < len;i++)
            {
                cout<<aux[i]<<' ';
            }
            cout<<'\n';
		}

    }
	return 0;
}
