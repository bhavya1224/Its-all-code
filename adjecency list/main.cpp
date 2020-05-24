#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v;
    int e;
    int SN,EN;
    cout<<"Enter the number of vertices:";
    cin>>v;
    cout<<"Enter the number of edges:";
    cin>>e;
    vector<vector <int> > adm(v);

    for(int i = 0; i<e; i++)
    {
        cout<<"Enter the Start node and End node of edge "<<i+1;
        cin>>SN>>EN;
        adm[SN].push_back(EN);
        adm[EN].push_back(SN);
    }
    for(int i = 0; i<v; i++)
    {
        cout<<i<<"--->";
        for(int j = 0; j<adm[i].size(); j++)
        {
            cout<<adm[i][j]<<" ";
        }
        cout<<endl;
    }

}
