// C++ program to rotate a matrix by 90 degrees
#include <bits/stdc++.h>
#define ll long long int
#define li long int
using namespace std;
 ll N;
void displayMatrix(li mat[N][N]);

void roMatrix(li mat[N][N])
{
    for (li x = 0; x < N/2; x++)
    {
        for (li y = x; y < N-x-1; y++)
        {
            // store current cell in temp variable
            li temp = mat[x][y];

            // move values from right to top
             mat[y][N-1-x] = mat[x][y] ;

            // move values from bottom to right
            mat[N-1-x][N-1-y] = mat[y][N-1-x] ;

            // move values from left to bottom
            mat[N-1-y][x] = mat[N-1-x][N-1-y]  ;

            // assign temp to left
            mat[y][N-1-x] = temp;
        }
    }
}
 void DisplayMatrix(li mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);

        printf("\n");
    }
    printf("\n");
}

 int main()
{

   cin>>N;
 li mat[N][N];
  for(ll i=0;i<N;i++)
    for(ll j=0;j<N;j++)
     cin>>mat[i][j];

    roMatrix(mat);

    DisplayMatrix(mat);

    return 0;
}
