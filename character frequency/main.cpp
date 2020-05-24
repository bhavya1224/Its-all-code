#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

   char str[100] = {};
   gets(str);
   int i = 0, alphabet[26] = {0}, j;
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }

   for (i = 0; i < 26; i++)
        if(alphabet[i]==0)
            continue;
        else
            cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
   return 0;
}
