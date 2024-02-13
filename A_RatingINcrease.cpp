#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int x = s.size()/2;
        // cout<<x<<endl;
        int y = s.size()/2;
        int n = s.size();

        
        int flag  = 0;
        while(x>=0)
        {

        string temp1,temp2;

        while(x>0 && s[x]==0)
        {
            x--;
        }
        
        // cout<<x<<endl;
        temp1 = s.substr(0,x);
        temp2 = s.substr(x,n-x);

        if(x<y && temp2[0]!='0')
        {
            cout<<temp1<<" "<<temp2<<endl;
            flag = 1;
            break;
        }
        else
        {
            int x1 = stoi(temp1);
            int x2 = stoi(temp2);
        
            if(x1<x2)
            {
                cout<<x1<<" "<<x2<<endl;
                flag  = 1;
                break;
            }
            else if(x1==x2)
            {
                // cout<<-1<<endl;
                
                break;
            }
            else
            {
                x--;
            }

        }

       

        


        }

        if(flag==0)
        {
            cout<<-1<<endl;
        }


       

    }
}