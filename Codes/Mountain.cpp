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


     int n =nums.size();
        vector<int> leftmin(n,-1);
        vector<int> rightmin(n,-1);
        
       
        
        int x = INT_MAX;
        for(int i=1;i<nums.size();i++)
        {
           x = min(x,nums[i-1]);
           leftmin[i] = x; 
           cout<<"leftmin at "<<i<<" = "<<leftmin[i]<<endl;
        }
         x = INT_MAX;
         
        
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            x = min(x,nums[i+1]);
            rightmin[i]=x;
            cout<<"rightmin at "<<i<<" = "<<rightmin[i]<<endl;
        }
        int sum =0,minsum=INT_MAX;
        for(int i=1;i<nums.size()-1;i++)
        {
            sum = nums[i] + leftmin[i] + rightmin[i];
            minsum = min(minsum,sum);
            cout<<"MINSUM at i "<<i<<" = "<<minsum<<endl;
            
        }
        
        cout<<"MINSUM = "<<minsum<<endl;
        

}