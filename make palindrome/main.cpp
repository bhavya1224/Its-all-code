#include <iostream>
char arr[]={};
using namespace std;
bool check(string str , int i)
{
    int j = str.size() - 1;
    while(j>i)
    {
       if(str[i++]!=str[j--])
       {
           return false;
       }
    }
    return true;

}
int makePalindrome(string str)
{
    int N = str.length();

    for(int i = 0 ; i<N ; i++)
    {
        if(check(str,i))
        {
            return(i);
        }


    }

}

int main()
{
    string str;
    getline(cin,str);
    cout<<makePalindrome(str);
}
