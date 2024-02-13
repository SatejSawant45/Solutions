#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int i=0;
    for(;i<m;i++)
    {
        if(nums[i]==4)
        {
            break;
        }
        else{
            cout<<nums[i]<<" ";
        }
    }
    

}