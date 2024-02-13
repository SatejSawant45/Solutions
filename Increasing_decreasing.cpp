#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;

        vector<int> v(n,0);

        v[0] = x;
        v[n-1] = y;

        for(int i=n-2,j=1;i>0;i--,j++)
        {
            v[i] = v[i+1] - j;
        }


        if(v[1]-v[0]<=v[2]-v[1])
        {
            cout<<-1<<endl;
        }
        else 
        {
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }


    }
}