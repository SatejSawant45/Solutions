#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
        int n = nums.size();
        vector<int> ans(n,0);

       
        int bit_or = 0;

        for(int i=0;i<n;i++)
        {
            bit_or = (bit_or | nums[i]);
            
        }

        cout<<"Maximum bitwise_OR = "<<bit_or<<endl;

        int b_or=0;
        for(int i=n-1;i>=0;i--)
        {
            b_or = 0;
            int flag  = 0;
            int j = i;
            for(j=i;j<n;j++)
            {
                b_or = (b_or | nums[j]);
                if(b_or==bit_or)
                {
                    cout<<"in if "<<endl;
                    ans[i] = (j-i+1);
                    flag  =1;
                    break;
                }


            }
            if(flag == 0)
            {
                cout<<"in flag "<<endl;
                ans[i] = ((j-1)-i+1);
            }

            
        }

        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }

        

}