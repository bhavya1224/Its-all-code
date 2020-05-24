
#include <iostream>
#include<string>
using namespace std;
void compute_lps(string pat,int m,int lps[]);
void kmp(string txt,string pat);

void kmp(string txt,string pat)
{
    int n = txt.size();
    int m = pat.size();
    int lps[m];
    compute_lps(pat,m,lps);
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == m)
        {
            cout<<"Found pattern at index "<< i - j;
            j = lps[j - 1];
        }

        // mismatch after j matches
        else if (i < n && pat[j] != txt[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}
void compute_lps(string pat,int m ,int lps[])
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i < m)
    {
        if(pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len!=0)
                len = lps[i-1];
            else
            {
                lps[i] = 0;
                i++;
            }

        }
    }
}

int main()
{
    string txt,pat;
    getline(cin,txt);
    getline(cin,pat);
    kmp(txt,pat);
    return 0;
}
