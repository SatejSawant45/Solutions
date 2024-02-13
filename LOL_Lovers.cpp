#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int to=0,tl=0,co=0,cl=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            tl++;
        }
        else 
        {
            to++;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='L')
        {
            cl++;
        }
        else
        {
            co++;
        }

        if(cl!=(tl-cl) && co!=(to-co))
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    solve();
}
