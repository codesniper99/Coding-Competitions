// Kadane's Algorithm to find maximum sum of sub-contiguous sub array.

#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin>>n;
   vector<int> a(n);

   for(int i=0;i<n;i++)
     cin>>a[i];

   int max_sum=0;
   int cur_sum=0;
   int start_index=0;int final_index=0;

   for(int i=0;i<n;i++)
   {
       cur_sum+=a[i];
       if(cur_sum<0)
         {cur_sum=0; start_index=i+1;final_index=i+1;}

       else
       {
           if(cur_sum>max_sum)
             {max_sum=cur_sum;final_index=i;}
       }
   }

   printf(" \nMaximum sum is -> %d \nfrom index %d to index %d",max_sum, start_index+1,final_index+1);
    return 0;
}
