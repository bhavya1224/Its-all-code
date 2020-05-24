#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    int q;
    cin>>n;
    int arr[n];
    int check[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<n; j++)
        {
            check[i] = arr[j]-arr[i];
        }

    }
    for(int i = 0; i<n ; i++)
    {
        cout<<check[i];
    }
}
