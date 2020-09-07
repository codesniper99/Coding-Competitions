#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
           ll t;
           cin>>t;
           while(t--)
           {


               int days;
               cin>>days;
               string s;
               cin>>s;
               int dayeth=0;
               if(s=="mon")
                dayeth=1;
               if(s=="tues")
                dayeth=2;
               if(s=="wed")
                dayeth=3;
               if(s=="thurs")
                dayeth=4;
               if(s=="fri")
                dayeth=5;
               if(s=="sat")
                dayeth=6;
               if(s=="sun")
                dayeth=7;
int arr[7];
for(int i=0;i<7;i++)
    arr[i]=4;

               if(days==28 )
               {
                   for(int i =0;i<7;i++)
                  cout<<'4'<<' ';
                  cout<<'\n';

               }
 else if(days==29)
               {
                   for(int i=0;i<7;i++)
                   {
                       if(i+1==dayeth )
                        cout<<arr[i]+1<<' ';
                       else
                        cout<<arr[i]<<' ';

                   }
                   cout<<'\n';


               }
               else if(days==30)
               {
                     if(dayeth==5)
                        cout<<"4 4 4 4 5 5 4";
                     else if(dayeth==6)
                        cout<<"4 4 4 4 4 5 5";
                     else if(dayeth==7)
                        cout<<"5 4 4 4 4 4 5";
                  else
                    for(int i=0;i<7;i++)
                   {

                     if(i+1 == dayeth||i+1==dayeth+1)
                                           cout<<arr[i]+1<<' ';
                                           else
                                            cout<<arr[i]<<' ';

                   }
                   cout<<'\n';
               }
               else
               {  if(dayeth==5)
                        cout<<"4 4 4 4 5 5 5";
                     else if(dayeth==6)
                        cout<<"5 4 4 4 4 5 5";
                     else if(dayeth==7)
                        cout<<"5 5 4 4 4 4 5";
                  else
                    for(int i=0;i<7;i++)
                   {

                     if(i+1 == dayeth||i+1==dayeth+1||i+1==dayeth+2)
                                           cout<<arr[i]+1<<' ';
                                           else
                                            cout<<arr[i]<<' ';

                   }
                   cout<<'\n';



               }

           }

    return 0;
}
