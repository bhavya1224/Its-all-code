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
    for(int i = 0; i<(arr[n]+4); i++)
    {
        for( int j =0; j<n; j++)
        {
           if(abs(arr[j]-i) == 0 || abs(arr[j] - i ) > m)
           {
               continue;
           }
           if(((abs(arr[j]-i))/m)<=m)
           {
               if(check(abs(arr[j]-i)/m))
               {
                   count++;
                   if(count>max)
                        max = count;
               }

           }

        }
         count = 0;

}
cout<<max+1;
}
