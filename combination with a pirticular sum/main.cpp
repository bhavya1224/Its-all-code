#include <iostream>

using namespace std;
int find_sum(int , int[], int, int);
int sum(int,int,int);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int s;
    cin>>s;
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];

    }
    cout<<fin_sum(n,arr,0,s);
    return 0;
}
int find_sum(int n , int arr[], int i int s)
{
    if(i>=n)
        return 0;
    return sum(arr[i]+ find_sum(n,arr ,i+1), find_sum(n,arr,i+1), s);
}

int sum(int x,int y,int s)
{
    int sum1 = 0
    sum = x + y;
    if(sum == s)
        cout<<"found";
    else
        cout<<" not found";
}
