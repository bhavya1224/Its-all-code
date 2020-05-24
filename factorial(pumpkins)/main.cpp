#include<iostream>
using namespace std;

    int main() {
        int n, i;
        int fact = 1;

        cin>>n;

        if (n < 0)
                cout<<"Negative age";
        else {
            for (i = 1; i <= n; ++i) {
                fact *= i;
            }
            cout<<fact<<" pumpkins";
        }
        return 0;
    }
