#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;

    int s;
    cin>>s;
    
    for(int i=0;i<s;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int target;
    cin>>target;

    //  int low = 0 , high = nums.size()-1 ,mid = 0 , y = -1;

    //     while(low<=mid)
    //     {
    //         mid = (low + high)/2;
    //         if(nums[mid]<=target)
    //         {
    //             y = max(y,mid);
    //             low = mid + 1;

    //         }
    //         else
    //         {
    //             high = mid - 1;
    //         }
    //     }
      int l = 0 , h = nums.size()-1;
        int m =0,a=nums.size();
        while(l<=h)
        {
            m= (l+h)/2;
            if(nums[m]>=target)
            {
               a = min(a,m);
               h = m-1;
            }
            else
            {
               l =  m + 1;
            }
        }
        
    cout<<a;
}