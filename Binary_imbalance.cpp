#include<bits/stdc++.h>

using namespace std;

bool solve(string s)
{
    int zero=0,one=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }


    // if(zero>=one)
    // {
    //     return true;
    // }
    if(zero==0)
    {
        return false;
    }

    return true;


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

        if(solve(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}