#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        // vector<char> chef;
        // vector<char> chefina;
       
        int n;
        cin>>n;
          string chef;
        string chefina;
        // for(int i=0;i<n;i++)
        // {
        //     char x;
        //     cin>>x;
        //     chef.push_back(x);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     char x;
        //     cin>>x;
        //     chefina.push_back(x);
        // }
        
        cin>>chef;
        cin>>chefina;
        
        int maxcount=INT_MIN;
        int count_chef=0;
        int count_chefina=0;
        
        for(int i=0;i<n;i++)
        {
            if(chef[i]==chefina[i])
            {
                continue;
            }
            else if(chef[i]=='R' && chefina[i]=='S')
            {
                count_chef++;
                
            }
            else if(chefina[i]=='R' && chef[i]=='S')
            {
                count_chefina++;
            }
            else if(chef[i]=='S' && chefina[i]=='P')
            {
                count_chef++;
            }
            else if(chef[i]=='P' && chefina[i]=='S')
            {
                count_chefina++;
            }
            else if(chef[i]=='P' && chefina[i]=='R')
            {
                count_chef++;
            }
            else if(chef[i]=='R' && chefina[i]=='P')
            {
                count_chefina++;
            }
        }

        cout<<count_chef<<" "<<count_chefina<<endl;
        
        if(count_chef>count_chefina)
        {
            cout<<0<<endl;
        }
        else if(count_chef<count_chefina)
        {
            int temp  = (count_chefina-count_chef)/2;
            cout<<temp+1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        
        
    }
	
	return 0;
}
