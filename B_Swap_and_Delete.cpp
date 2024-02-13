#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin>>s;

    vector<int> freq(2,0);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            freq[0]++;
        }
        else
        {
            freq[1]++;
        }
    }
    int flag = 0;
    for(int i=0;i<s.size();i++)
    {
        int required;
        if(s[i]=='0')
        {
            required = 1;
        }
        else
        {
            required = 0;
        }

        if(freq[required]>0)
        {
            freq[required]--;
        }
        else
        {
            cout<<s.size()-i<<endl;
            flag = 1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<0<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
        
    }
}