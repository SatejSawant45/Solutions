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

        int op = 0;
        int x = 0;

        int i=0;

        while(i<n)
        {
            x = k;
            if(s[i]=='B')
            {
                op++;
                while(i<n && x--)
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }

        cout<<op<<endl;
    }


}