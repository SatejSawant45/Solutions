#include<bits/stdc++.h>

using namespace std;

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

        int count = 0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                count++;
            }
        }

        int i=0;
        int c=0,cmax=INT_MIN;
        while(i<n)
        {
            c = 0;
            if(s[i]=='.')
            {
                while(i<n && s[i]!='#')
                {
                    i++;
                    c++;

                }
            }
            else
            {
                i++;
            }
            cmax = max(cmax,c);
        }

        // cout<<cmax<<endl;

        if(count==0)
        {
            cout<<0<<endl;

        }
        else if(cmax>=3)
        {
            cout<<2<<endl;
        }
        else if(cmax<3)
        {
            cout<<count<<endl;
        }
    }
}