#include <iostream>

using namespace std;

int main()
{
    int input1[] = {1, 5, 10, 20, 40, 80};
    int input2[] = {6, 7, 20, 80, 100};
    int input3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    for (int i = 0 ;i<=6 ; i++){
        for(int j = 0; j<=5; j++){
            for(int k = 0; k<=5; k++){
                if (input1[i]==input2[j] && input2[j]==input3[k])
                    cout<<input1[i];
            }
        }
    }


}
