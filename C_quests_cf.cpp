#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int> a,b;
        int n,k;
        cin>>n>>k;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }

        vector<int> preSum(n,0),maxNum(n,0);

        preSum[0] = a[0];
        maxNum[0] = b[0];

        for(int i=1;i<n;i++)
        {
            preSum[i] = preSum[i-1] + a[i];
            maxNum[i] = max(maxNum[i-1],b[i]);
        }

        k--;
        int ans = INT_MIN;

        for(int i=0;i<n;i++)
        {
            ans = max(ans,preSum[i]+(k-i)*maxNum[i]);
            if(i==k)
            {
                break;
            }
        }

        cout<<ans<<endl;

    }

}