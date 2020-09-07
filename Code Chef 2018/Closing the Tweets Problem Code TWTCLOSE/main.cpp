#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    bool tweets[1001];
    memset(tweets,false,sizeof(tweets));
    cin>>n>>k;
    while(k--)
    {
        char word[20];
        cin>>word;
        int x;
        if(strcmp(word,"CLICK")==0)
        {
            cin>>x;
            tweets[x]=!tweets[x];
        }
        else if(strcmp(word,"CLOSEALL")==0)
         memset(tweets,false,sizeof(tweets));

        int counter=0;
        for(int i=1;i<=n;i++)
        {
            if(tweets[i])
            {counter++;}
        }

        cout<<counter<<'\n';
    }
    return 0;
}
