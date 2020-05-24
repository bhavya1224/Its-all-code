#include <bits/stdc++.h>

using namespace std;
bool check(float n)
{
   if(ceil(n)==floor(n))
        return true;
   else
        return false;
}
int main()
{
    float m;
    cin>>m;
    int q;
    cin>>q;
    int n;
    cin>>n;
    float arr[n];
    int max = 0;
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        for( int j =0; j<n; j++)
        {
           if(abs(arr[j]-arr[i]) == 0 )
           {
               continue;
           }
           //if(abs(arr[j]-arr[i]) <= (q))
           //{
               if(check(abs((arr[j]-arr[i])/m)))
               {
                   if((abs(arr[j]-arr[i])/m)<=m)
                   {
                       count++;
                        if(count>max)
                            max = count;

                   }

               }

           //}

        }
         count = 0;

}
cout<<max+1;
}
