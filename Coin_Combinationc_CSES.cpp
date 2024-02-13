#include<bits/stdc++.h>
#define MOD  1000000007;

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

    vector<int> dp(x+1,0);

    dp[0] = 1;

    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coins[j]<=i)
            {
                dp[i] = (dp[i]+dp[i-coins[j]]) % MOD;
            }
        }
    }

    cout<<dp[x]<<endl;

}