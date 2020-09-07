#include <iostream>

using namespace std;

int getMinStep(int n)
{
    int mem[n+1];

    if(n==1)
        return 0;
if(mem[n]!=-1)
    return mem[n];
    int r= 1+ getMinStep(n-1);
    if(n%2==0)
    {
        r= min(r,getMinStep(n/2));

    }
    if(n%3==0)
        r=min(r,getMinStep(n/3));

    mem[n]=r;
    return r;

}



int main()
{
   int n;int a;
   cin>>n;
   cout<<' '<<getMinStep(n);
}
