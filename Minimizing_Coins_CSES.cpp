#include<bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> nums;
        int n,x;
        cin>>n>>x;

        for(int i=0;i<n;i++)
        {
            int y;
            cin>>y;
            nums.push_back(y);

        }

        vector<int> dp(x+1,1e9);

        dp[0]=0;

        for(int i=1;i<=x;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<=i)
                {
                dp[i] = min(dp[i],dp[i-nums[j]] + 1);

                }

            }
        }

        if(dp[x]==1e9)
        {
            cout<<-1;
        }
        else 
        {
            cout<<dp[x];
        }

    
}