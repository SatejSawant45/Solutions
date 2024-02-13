#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int a=0,b=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='A') a++;
            else b++;
        }

        if(k==b) 
        {
            cout<<0<<endl;
            continue;
        }
        else if(k<b)
        {
            int i=0;
            while(i<n && b!=k)
            {
                if(s[i]=='B') b--;

                i++;

            }
            cout<<1<<endl;
            cout<<i<<" ";
            if(s[i-1]=='A') cout<<'B'<<endl;
            else cout<<'A'<<endl;
            


        }
        else if(k>b)
        {
            int i=0;
            while(i<n && b!=k)
            {
                if(s[i]=='A') b++;

                i++;

            }
            cout<<1<<endl;
            cout<<i<<" ";
            if(s[i-1]=='A') cout<<'B'<<endl;
            else cout<<'A'<<endl;
        }

      

        
    }
}