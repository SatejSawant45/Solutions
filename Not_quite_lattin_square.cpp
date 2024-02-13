#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int a=1,b=1,c=1;
    for(int i=0;i<3;i++)
    {
        if(s[i]=='A') a--;
        if(s[i]=='B') b--;
        if(s[i]=='C') c--;
    }

    if(a)cout<<'A'<<endl;
    if(b)cout<<'B'<<endl;
    if(c)cout<<'C'<<endl;


}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int flag = 0;
        for(int i=0;i<3;i++)
        {
            if(s1[i]=='?')
            {
                solve(s1);
                flag=1;

            }
        }

        if(flag==1)continue;

        for(int i=0;i<3;i++)
        {
            if(s2[i]=='?')
            {
                solve(s2);
                flag=1;
                
            }
        }

        if(flag==1)continue;

        for(int i=0;i<3;i++)
        {
            if(s3[i]=='?')
            {
                solve(s3);
                flag=1;
                
            }
        }
    }
}