#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int a1=0,b1=0,c1=0;

        if((b&1)==(c&1))
        {
            a1 = 1;
        }
        if((a&1)==(c&1))
        {
            b1 = 1;
        }
        if((a&1)==(b&1))
        {
            c1 = 1;
        }
        cout<<a1<<" "<<b1<<" "<<c1<<endl;

    }

}