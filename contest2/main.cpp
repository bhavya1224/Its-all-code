#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int tastiness[]={};
    int cupcakes;
    for(int i = 0; i<n; i++)
    {
        cout<<"test case:"<<i;
        cin>>cupcakes;
        for(int j=0; j<=cupcakes; j++)
        {
            cin>>tastiness[j];
        }



    }
    for(int i=0 ; i<cupcakes ; i++)
    {
        cout<<tastiness[i];
    }
}
