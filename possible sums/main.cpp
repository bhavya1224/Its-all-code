
#include<bits/stdc++.h>
using namespace std;
void printSet(vector<int> const &s1)
{
	for (int j = 0; j<s1.size();j++)
		cout << s1[j];
	cout << endl;

}
int sum_Set(vector<int> s1)
{

    int sum = 0;
    set<int> sum1;
    set<int>::iterator it;
    for (int i = 0; i<s1.size();i++)
    {
      while (s1[i] != 0)
        {
            sum = sum + s1[i] % 10;
            s1[i] = s1[i]/10;
        }


    }
    sum1.insert(sum);
    return sum1;
}
void findPowerSet(vector<int> const &S, vector<int> &s1, int n)
{
    set<int> d;
    set<int>::iterator it;
	if (n == 0)
	{
		printSet(s1);
		d = sum_Set(s1);
		for (it=d.begin(); it != d.end(); ++it)
        cout << ' ' << *it<<endl;

        return;
	}


	s1.push_back(S[n - 1]);
	findPowerSet(S, s1, n - 1);



	s1.pop_back();
	findPowerSet(S, s1, n - 1);



}


int main()
{
	int n;
	cin>>n;
	int a;
	vector<int> S ;
	for(int i = 0; i<n; i++)
    {
        cin>>a;
        S.push_back(a);
    }


	vector<int> s1;

	findPowerSet(S, s1, n);


	return 0;
}
