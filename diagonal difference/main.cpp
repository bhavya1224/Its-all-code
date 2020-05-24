#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r;
    cin>>r;
    int sumL = 0;
    int sumR = 0;
    int a[r][r];
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            if(i == j)
            {
                sumL+=a[i][j];
            }
        }
    }
    int k = r-1;
     for(int i = 0; i<r; i++)
    {
        sumR+=a[i][k-i];
    }
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<abs(sumR - sumL)<<endl;
    cout<<sumL<<" "<<sumR;
}
