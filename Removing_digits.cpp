#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> dp(n+1,1e9);

    dp[0] = 0;

    for(int i=1;i<=n;i++)
    {
        string temp = to_string(i);
        for(auto c : temp)
        {
            int num = c - '0';
            if(num!=0)
            {
                dp[i] = min(dp[i],dp[i-num]+1);
            }
        }
    }

    cout<<dp[n]<<endl;

}