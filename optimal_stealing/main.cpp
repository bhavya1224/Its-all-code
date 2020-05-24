#include <iostream>

using namespace std;
int max_stealing(int , int[], int);
int max_value(int,int);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];

    }
    cout<<max_stealing(n,arr,0);
    return 0;
}
int max_stealing(int n , int arr[], int i)
{
    if(i>=n)
        return 0;
    return max_value(arr[i]+ max_stealing(n,arr ,i+2), max_stealing(n,arr,i+1));




}

int max_value(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
