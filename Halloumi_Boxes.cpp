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

        if(k>1)
        {
            cout<<"YES"<<endl;
        }
        else if(k==1)
        {
            if(is_sorted(v.begin(),v.end()))
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }

        
    }
}