#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int> v;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        if(n&1)
        {
            //odd
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;

        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;

        }
    }
}