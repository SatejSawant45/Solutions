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

        if(n-k==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        map<char,int> m;

        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }

        int nChar = 0;
        int totalChar = 0;

        for(auto pr : m)
        {
            if(pr.second%2 != 0)
            {
                nChar++;
                
            }
        }

        

       
        if(k < nChar-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}