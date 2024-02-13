#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;

        int dmax = INT_MIN;
        int temp = 0;
        for(int i=1;i<=n;i++)
        {
            int y;
            cin>>y;

            int diff = y - temp;
            dmax = max(dmax,diff);
            temp = y;

        }

        dmax = max(dmax,(x-temp)*2);

        cout<<dmax<<endl;
    }
}