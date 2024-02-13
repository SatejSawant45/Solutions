#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        char ch = s[1];
        char ch1 = s[0];

        int x = ch - '0';
        
        for(int i=1;i<=8;i++)
        {
            if(i!=x)
            {
                cout<<ch1<<i<<endl;
            }
        }

        for(int i='a';i<='h';i++)
        {
            char ch2 = (char)i;
            if(ch2!=ch1)
            {
            cout<<ch2<<x<<endl;

            }
        }

    }
}