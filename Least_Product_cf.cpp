#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int> nums;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }

        int count = 0;
        int count_zero = 0;
        int index = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                count++;
                index = i;
            }
            if(nums[i]==0)
            {
                count_zero++;
            }
        }

        if(count_zero>0)
        {
            cout<<0<<endl;
            
            continue;
        }



        if(count==0)
        {
            cout<<1<<endl;
            cout<<index+1<<" "<<0<<endl;
        }
        else if(count%2==0)
        {
            cout<<1<<endl;
            cout<<index+1<<" "<<0<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }

}