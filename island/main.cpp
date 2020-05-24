#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool isSafe(int x, int y, int i, int j)
{
    if(i>=x || i<0)
        return false;
    if(j >=y || j<0)
        return false;
    else
        return true;

}

void delisland( int x, int y, int **arr, int i, int j)
{
    if(isSafe(x,y,i,j)&& arr[i][j]==1)
    {
        arr[i][j]=0;
        delisland(x,y,arr,i-1,j-1);
        delisland(x,y,arr,i-1,j);
        delisland(x,y,arr,i-1,j+1);
        delisland(x,y,arr,i,j-1);
        delisland(x,y,arr,i,j+1);
        delisland(x,y,arr,i+1,j-1);
        delisland(x,y,arr,i+1,j);
        delisland(x,y,arr,i+1,j+1);
    }


}

int island(int x , int y, int **arr)
{
    int count = 0;
    for(int i = 0; i < x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
                delisland(x,y,arr,i,j);

            }
        }
    }
    return count;
}
int main()
{
    int x;
    int y;
    cin>>x;
    cin>>y;

    int **arr = (int **)malloc(x*sizeof(int *));
    for(int i = 0; i < x; i++)
    {
        arr[i] = (int *)malloc(y*sizeof(int));
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
           cin>>arr[i][j];
        }

    }
    cout<<island(x,y,arr)-1;
    return 0;
}

