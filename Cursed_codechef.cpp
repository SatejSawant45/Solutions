#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> v;
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            
        }
        
        sort(v.begin(),v.end());
        
        vector<int> preSum(n,0);
        preSum[0] = 0;
        
        
        for(int i=1;i<n;i++)
        {
            preSum[i] = preSum[i-1] + v[i-1];
        }
        
        int cursed = 0;
        
        for(int i=0;i<n;i++)
        {
            if(preSum[i]>=v[i])
            {
                cursed++;
                cout<<cursed<<" "<<preSum[i]<<" "<<v[i]<<endl;
            }
            
        }
        
        cout<<cursed<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        
        
        
        
    }
	
	return 0;
}
