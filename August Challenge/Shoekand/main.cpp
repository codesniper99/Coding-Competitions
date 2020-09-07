//SOLVEDDDDD :D
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;


    ll binary[1000];

ll countones(ll len)
{
    ll x=0;
    for(ll i=0;i<len;i++)
    {
         if(binary[i]==1)
            x++;
    }
    return x;

}

ll binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;

    ll temp = num;
    while (temp)
    {
        ll last_digit = temp % 10;
        temp = temp/10;

        dec_value += last_digit*base;

        base = base*2;
    }

    return dec_value;
}


ll add(ll len,ll n)
{
    ll ones= countones(len);
    if(ones == 2)
        return 0;
    if(ones <2)
        return 1;
    if(ones>2)
    {
        if(binary[0]==1 &&binary[1]==0)//10...
        {
            ll counter=0;
            ll i;
            for(i=0;i<len;i++)
            {
                if(binary[i]==1)
                {
                    counter++;
                }
                if(counter == 2 )
                {
                    break;

                }

            }
            ll binaryNumber =0;
           //cout<<'\n'<<i<<'\n';
            for(ll j=i;j<len;j++)
            {
                ll x=binary[j]*(pow(2.0,len-j-1));
                binaryNumber+=x;
            }
            ll secondBinary=pow(2.0,len-i);
            //cout<<'\n'<<secondBinary;
            //cout<<'\n'<<binaryNumber<<'\n';
            return( (secondBinary)-(binaryNumber));

        }


        if(binary[0]==1 && binary[1] ==1)
        {
            return( ceil(pow(2.0,len))+1-n);

        }

    }



}

ll subtract(ll len,ll n)
{
    ll ones= countones(len);
    //cout<<ones<<len;
    if(ones==2)
        return 0;
    if(ones<2)
    {
        if(len == 3 )
            return 1;
        else if(len<3)
            return 1000000001;
        else
            {
                ll first= pow(2,len-2)+pow(2.0,len-3);
                return(n-first);
            }

    }
    if(ones>2)
    {
        ll counter=0;
        ll i;
        for(i=0;i<len;i++)
        {
            if(binary[i]==1)
            {
                counter++;
            }
            if(counter == 2 )
            {
                break;

            }

        }
        ll binaryNumber =0;
        for(ll j=i+1;j<len;j++)
        {
             ll x=binary[j]*(pow(2.0,len-j-1));
                binaryNumber+=x;
        }
       //  cout<<'\n'<<binaryNumber<<'\n';
        return (binaryNumber);


    }

}

ll DTB(ll n)
{

    ll bin[1000];

  for(ll j=0;j<1000;j++)
    bin[j]=0;
    ll i = 0;
    while (n > 0) {

        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (ll j = i - 1; j >= 0; j--)
          binary[i-1-j]= bin[j];

          return i;
}

int main()
{

    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {cout<<"2\n";continue;}
       ll length = DTB(n);

     //  for(ll i=0;i<length;i++)
     //  {
     //      cout<<binary[i];
     //  }

    //   cout<<"\n";
    //   cout<<length<<'\n';
     // cout<<subtract(length,n)<<" "<<add(length,n)<<'\n';
      cout<<min(subtract(length,n),add(length,n))<<'\n';

    }

   /* for(ll i=3;i<=1000000000;i++)
    {  ll n=i;
        if(n==1)
        {cout<<"2\n";continue;}
       ll length = DTB(n);


       // cout<<"\n";
      // cout<<length<<'\n';
      cout<<n<<"  \n";
      cout<<subtract(length,n)<<" "<<add(length,n)<<'\n';
      cout<<min(subtract(length,n),add(length,n))<<'\n';
      ll x;
      x=n-subtract(length,n);
      ll y=add(length,n)+n;
      ll len1=DTB(x);
     ll onex= countones(len1);
     ll len2=DTB(y);
      ll oney= countones(len2);
      if(onex!=2)
      {
          char c;
          cout<<n<<" "<<"HERE SUBTRACT\n"<<onex<<" "<<x;
            cin>>c;
      }

      if(oney!=2)
      {
          char c;
          cout<<n<<" HERE ADD\n"<<oney<<" "<<y;
        cin>>c;
      }
    }
*/
    return 0;
}
