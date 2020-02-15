#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;
int main()
{
    int x;double  y;

    cin>>x>>y;
    if(x>0&&x<=2000&&y>=0&&y<=2000)
    {


    if(x%5==0)
    {
        if(x<=y)
            {y=y-x-0.5;
              cout<<'\n'<<fixed<<setprecision(2)<<y;
              }
        else
            cout<<'\n'<<fixed<<setprecision(2)<<y;

    }
    else
        cout<<'\n'<<fixed<<setprecision(2)<<y;
    }
    return 0;
}
