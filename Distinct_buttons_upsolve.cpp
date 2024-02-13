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

        int a=0,b=0,c=0,d=0;

        for(int i=1;i<=n;i++)
        {
            int x , y;
            cin>>x>>y;

            a = a | (x>0);
            b = b | (x<0);
            c = c | (y>0);
            d = d | (y<0);


        }

        if(a&b&c&d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}