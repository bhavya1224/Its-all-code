#include <iostream>

using namespace std;

int main()
{
    unsigned int n1;
    cin>>n1;
    int n;
    int max = 0;
    int count = 0;
    while(n1!=0)
    {
           n1 = (n1 & (n1<<1));
           count++;
    }

cout<<count;


}
