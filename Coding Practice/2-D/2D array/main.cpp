/*www.DailyFreeCode.comDownload Projects, Sourcecodes, Tips and Tricks, Interview FAQs, Hotlinks and more....Logon to www.DailyFreeCode.com*///Write a function to read a matrix of size m x n  from the//keyboard.#define row 50
#define col 50
#include <iostream>
using namespace std;
int main()
{
void data_entry_matrix(int,int);

cout<<"\n\n\tEnter Number of rows you want to enter:-";
int rows;
cin>>rows;

cout<<"\n\n\tEnter Number of Column You want to enter:-";
int cols;
cin>>cols;

data_entry_matrix(rows,cols);
return 0;

}



void data_entry_matrix(int r, int c)
{

int row,col;
int matrix[row][col];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
   {
       cin>>matrix[i][j];
   }
}
}
