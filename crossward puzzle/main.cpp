#include <iostream>
#include<bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

int main()
{
    string words = "JAMUN;ORANGE;BANANA;APPLE";
    vector<string> result;
    boost::split(result, words, boost::is_any_of(";"));
     for (int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    return 0;
