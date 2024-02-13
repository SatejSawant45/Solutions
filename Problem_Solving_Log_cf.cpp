#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int> m;

    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }

    int ans = 0;

    for(auto pr : m)
    {
        int reqFreq = (pr.first - 'A') + 1;
        if(pr.second >= reqFreq)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int> m;

    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }

    int ans = 0;

    for(auto pr : m)
    {
        int reqFreq = (pr.first - 'A') + 1;
        if(pr.second >= reqFreq)
        {
            ans++;
        }
    }

    cout<<ans<<endl;

    }
}