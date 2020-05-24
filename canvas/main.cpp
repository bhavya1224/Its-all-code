#include <iostream>

using namespace std;

int main()
{
   int r , c , x1, y1 ,x2 , y2;
   cin>>r>>c;
   cin>>x1>>y1;
   cin>>x2>>y2;
   char arr[r][c];

   for(int i = 0 ; i<r; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            arr[i][j] = '~';
            //corner *
            arr[x1][y1] = '*';
            arr[x1][y2+1] = '*';
            arr[x2-1][y1] = '*';
            arr[x2-1][y2+1] = '*';

                for(int i = x1 ; i<(x2-2);i++)
                    {
                        arr[i+1][y1]='|';
                        arr[i+1][y2+1]='|';
                    }
                for(int i = y1 ; i<(y2);i++)
                    {
                        arr[x1][i+1]='-';
                        arr[x2-1][i+1]='-';
                    }

        }

    }

for(int i = 0 ; i<r; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            cout<<arr[i][j];


        }
    cout<<endl;
    }
}
