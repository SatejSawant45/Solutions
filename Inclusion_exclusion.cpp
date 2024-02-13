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
        
        
        int sum = 0;
        for(int k=0;k<n;k++)
        {
            multiset<int> m;
            sum = 0;
            for(int i=0;i<n;i++)
            {
                if(i<=k)
                {
                    m.insert(v[i]);
                    sum = sum + v[i];
                }
                else 
                {
                    if(!m.empty())
                    {
                    auto it = m.rbegin();
                    int x = *it;
                    sum = sum + x;
                    
                    m.erase(x);
                    }
                        
                }
            }
            
            cout<<sum<<" ";
         
            
        }
        cout<<endl;
        
        
    }
	

}