#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string a;
        cin>>a;
        
        string ans;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]=='R')
            {
                ans.push_back('P'); 
            }
            else if(a[i]=='P')
            {
                ans.push_back('S');
            }
            else
            {
                ans.push_back('R');
            }
        }
        
        // cout<<ans<<endl;
        int k = n - ((n/2) + 1);
        
        int i=0;
        
        while(i<n && k)
        {
            if(ans[i]!='P')
            {
                ans[i]='P';
                k--;
            }
            i++;
        }
        
        cout<<ans<<endl;
    }
	

}