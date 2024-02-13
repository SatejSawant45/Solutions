#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s,ans;
    cin>>s;

    int i=0;
    while(i<s.size())
    {
        if(s[i]=='-' && s[i+1]=='-')
        {
            ans.push_back('2');
            i=i+2;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            ans.push_back('1');
            i=i+2;
        }
        else
        {
            ans.push_back('0');
            i=i+1;
        }
    }
    cout<<ans<<endl;
}