
#include <bits/stdc++.h>
using namespace std;


int MissingNo(int a[], int n)

{
    int b[]={1,3,5,7,9,11};

for (int i = 0 ; i<=n ; i++ ){
       if(a[i] != b[i]){

            cout<<b[i];
            break;
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
     MissingNo(arr, n);
}
