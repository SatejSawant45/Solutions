#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<pair<int,int>> vp;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            vp.push_back(make_pair(x,y));
        }

        sort(vp.begin(),vp.end());

        int count = 0;

        for(int i=0;i<vp.size();i++)
        {
            for(int j=i;j<vp.size();j++)
            {
                if((j+1)<n && (vp[i].second>vp[j+1].second))
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;


    }
}