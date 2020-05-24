#include<bits/stdc++.h>
using namespace std;
int n = 7;
int pos[n] = {5,6,9,11,12,16,20};
int h[n]= {2,3,1,5,3,1,1};

int find(int result)
{
    for(int i = 0; i<n; i++)
    {
        if(pos[i] == result)
        {
            return(i);
        }

    }
    return 0;

}

int main ()
{

    int add, result,r;
    for(int i = 0; i<n; i++)
    {
        add = pos[i]+h[i];
        for(int j = i+1; j<n+i; j++)
        {
            if(pos[j]<=add)
            {
                if(h[i] < h[j])
                {
                    result= add + h[j];
                    r = find(result);
                    result = result+h[r];
                    cout<<result<<" from k1"<<endl;
                    break;
                }
                else
                {
                    result = add;
                    r = find(result);
                    result = result+h[r];
                    cout<<result<<"from k2"<<endl;
                    break;
                }


            }

            else
            {
                cout<<add<<endl;
                break;
            }

        }

    }

}
