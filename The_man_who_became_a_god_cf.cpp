#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int> v;
        int n,k;
        cin>>n>>k;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        vector<int> diff;
        for(int i=0;i<n-1;i++)
        {
            diff.push_back(abs(v[i]-v[i+1]));
        }

        sort(diff.begin(),diff.end());
        int sum = 0;
        int x = k-1;
        for(int i=0;i<diff.size()-x;i++)
        {
            sum+=diff[i];

        }
        cout<<sum<<endl;
    }
}