#include<bits/stdc++.h>

using namespace std;

void solve()
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

    int ans = INT_MAX;

    for(int i=0;i<vp.size();i++)
    {
        int upperVal = (vp[i].second+2-1)/2;
        int index = vp[i].first + upperVal - 1;

        ans = min(ans,index);

    }

    cout<<ans<<endl;


}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();

    }
}