#include <iostream>

using namespace std;
int totalWays(int cc, int cr, int dr, int dc)
{
    if(cr>dr|| cc>dc)
        return 0;
    if (cr==dr|| cc==dc )
        return 1;
    int total = totalWays(cc , cr+1, dr, dc) + totalWays(cc+1 , cr, dr, dc);
    return total;
}
int main()
{
   int m , n ;
   cin>>m>>n;
   cout<<totalWays(0, 0, m-1 , n-1);
}
