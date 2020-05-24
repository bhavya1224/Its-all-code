
#include <bits/stdc++.h>
using namespace std;
int firstno(int e){

        while(e>10){
            e/=10;
        }
    return e;
}
int secondno(int e){

        while(e>10){
            e= (e/10)%10;
        }
    return e;
}

int largest(int arr[], int n)

{
    int i, j, min_idx, temp;


    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)

            {

                if (firstno(arr[j]) > firstno(arr[min_idx]))
                {
                    min_idx = j;
                }


                if (firstno(arr[j]) == firstno(arr[min_idx]))
                {   cout<<"yup1"<<endl;
                    cout<<arr[j];

                    if (secondno(arr[j]) > secondno(arr[min_idx]))
                        cout<<"yup";
                    min_idx = j;
                }
                    temp = arr[min_idx];
                    arr[min_idx]  = arr[i];
                    arr[i] = temp;

                }

            }
    }

//67 98 34 0 12
//56 27 897 4 529
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
largest(arr, n);
for (int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}
}
