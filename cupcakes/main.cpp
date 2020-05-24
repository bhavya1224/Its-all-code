#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void cupcakes(string s)
{
    int cc = 0;
    int cv = 0;
    vector<int> ans;
    ans.push_back(0);
    for(int j = 0; j<s.length(); j++)
    {
        for(int k = j; k<s.length(); k++)
        {
            if(s[k] == 'c')
                cc++;
            else
                cv++;
            if(cc==cv)
            {
                ans.push_back(cv);
            }
        }
        cc = 0;
        cv = 0;
    }
    cout<<(*max_element(ans.begin(),ans.end()))*2 << endl;
}

int main()
{
    int t ;
    cin>>t;
    int n;
    string str;
    for (int i = 0; i<t;i++)
    {

        cin>>n;
        cin >> str;
        cupcakes(str);


    }
    //cout<<arr.size();

}
