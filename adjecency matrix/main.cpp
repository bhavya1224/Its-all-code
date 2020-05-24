#include <bits/stdc++.h>

using namespace std;
void add_Edge(int **adm,int SN, int EN, int W, string s)
{
    if (s == "yes")
    {
            adm[SN-1][EN-1] = W;
    }
    else
    {
            adm[SN-1][EN-1] = W;
            adm[EN-1][SN-1] = W;
    }
}

int main()
{
    int nodes;
    int edges;
    string s;
    cout<<"Please enter the number of nodes in the graph";
    cin>>nodes;
    int SN, EN, W;
    cout<<"Please enter the number of edges in the graph";
    cin>>edges;
    cout<<"Is the graph directed";
    cin>>s;
    cout<<"Adjacency Matrix Representation:"<<endl;
    for(int i = 0; i<nodes; i++)
    {
        for(int j = 0; j<nodes; j++)
        {
            cout<<"0";
        }
        cout<<endl;
    }
    int **adm = (int **)malloc(nodes * sizeof(int *));
    for(int i = 0; i<nodes; i++)
    {
        adm[i] = (int *)malloc(nodes * sizeof(int));
    }
    for(int i = 0; i<nodes; i++)
    {
        for(int j = 0; j<nodes; j++)
        {
            adm[i][j] = 0 ;
        }

    }
    for(int i = 0; i < edges; i++)
    {
        cout<<"Enter the start node, end node and weight of edge no"<<i+1;
        cin >> SN;
        cin >> EN;
        cin >> W;
        add_Edge(adm,SN,EN,W,s);
    }
    for(int i = 0; i<nodes; i++)
    {
        for(int j = 0; j<nodes; j++)
        {
            cout<<adm[i][j];
        }
        cout<<endl;
    }
}
