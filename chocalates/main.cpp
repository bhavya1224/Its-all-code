#include <iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;


int main()
{
   int n;
   cin>>n;
   vector <int> arr;
   int ele;

   for(int i = 0; i<n; i++)
   {

      cin>>ele;
      arr.push_back(ele);

   }
   int k;
   cin>>k;
   int max1;
   int max;
   int j = 0;
   while(k>0)
   {
        max = *max_element(arr.begin(), arr.end());
        int maxpos = distance(arr.begin(), max_element(arr.begin() , arr.end()));
        max1 = sqrt(max);
        arr[maxpos] = max1;
        k--;



   }
cout<<accumulate(arr.begin(), arr.end(), 0);

}
