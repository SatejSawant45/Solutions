#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        vector<pair<int,int>> vp;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        for(int i=0;i<n;i++)
        {
            vp.push_back(make_pair(v[i],i));
        }

        sort(vp.begin(),vp.end());
        vector<int> pre(n,0);
        pre[0] = vp[0].first;

        for(int i=0;i<n;i++)
        {
           pre[i] = pre[i-1]+vp[i].first;
        }

        // for(int i=0;i<n;i++)
        // {
        //     cout<<" "<<vp[i].first<<" "<<vp[i].second;
        // }

        int count = 0;
        v[vp[0].second] = 0;

        for(int i=1;i<n;i++)
        {
            count = i + 1;
            for(int j=i;j<n-1;j++)
            {
                if(pre[j]>=vp[j+1].first)
                {
                   count++;
                   
                }
                else
                {
                    break;
                }


            }
            v[vp[i].second] = count;
            
        }

        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }




    }
}