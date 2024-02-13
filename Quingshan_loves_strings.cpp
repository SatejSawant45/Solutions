#include<bits/stdc++.h>

using namespace std;

bool solve(string s, string t)
{
    if(s.size()==1) return true;

    int count=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }

    }

    if(count==s.size()-1) return true;


    for(int i=0;i<t.size()-1;i++)
    {
        if(t[i]==t[i+1])
        {
            return false;
        }
    }

    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]==t[0] || s[i+1]==t[t.size()-1])
            {
                return false;
            }
        }
    }

    return true;

}




int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string s , t;
        cin>>s>>t;

        if(solve(s,t))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

       
        
    }

}