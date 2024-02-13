#include<bits/stdc++.h>
# define MOD 1000000007;
using namespace std;

int main()
{
    vector<int> coins;
    int n,x;
    cin>>n>>x;

    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        coins.push_back(y);

    }

    vector<vector<int>> dp(n+1,vector<int>(x+1,0));

    for(int i=0;i<n;i++)
    {
        dp[i][0]=1;
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int k=1;k<=x;k++)
        {
            int skipping = dp[i+1][k];
            int picking = 0;
            if(coins[i]<=k)
            {
                picking = (dp[i][k-coins[i]]);

            }
            dp[i][k] = (skipping + picking) % MOD;
        }
    }

    cout<<dp[0][x]<<endl;


}

