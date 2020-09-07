#include <bits/stdc++.h>

using namespace std;

int maximumGcdAndSum(vector <int> A, vector <int> B)
{
    // Complete this function

    int x,y,r, gcd;
    int maxgcd=-999;
      int maxsum=-999;

    int n;

    n=A.size();


    for(int i=0;i<n;i++)
       {

          x=A[i];

          for(int  j=0;j<n;j++)

          {  x=A[i];
              y= B[j];
              r=1;
              if (x==y)
                r=0;

           while(r!=0)
             {

                r=x%y;
                 x=y;
                 y=r;
             }
            if(x==y)
                gcd=A[i];
            else
                gcd=x;

              if(gcd>maxgcd)
               { maxgcd=gcd;

                  maxsum=A[i]+B[j];
                }

                else if(gcd==maxgcd)
                {
                    if((A[i]+B[j])>maxsum)
                        maxsum=A[i]+B[j];
                }
                else
                    ;
         }
    }
   return maxsum;
}

int main() {

    int n;
    cin >> n;
    vector<int> A(n);
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    vector<int> B(n);
    for(int B_i = 0; B_i < n; B_i++){
       cin >> B[B_i];
    }
    int res = maximumGcdAndSum(A, B);
    cout << res << endl;
    return 0;
}
