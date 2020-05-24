#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int b = 6;
    int l = 20;
    int n = 4;
    int pos[n] = {1,8,13,20};
    int r[n] = {5,5,5,5};
    int area=0;
    int count=0;
    int l1;
    int diff = 0;
    for(int i = 0; i<n; i++)
    {
        l1 = (diff)+r[i];
        area += 2*(l1*(b/2));
        count++;
        if(area=l*b)
        {
            cout<<count<<endl;
        }
        diff = pos[i+1]-l1;


    }
}
