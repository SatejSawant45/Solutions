#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int x , y , z;
        cin>>x>>y>>z;

        if(x>y)
        {
            cout<<x<<endl;
            
        }
        else if(x<y)
        {
            int count = x+z;
            if(count<y)
            {
            int diff = y - count;
            cout<<(count + diff*2)<<endl; 
            }
            else
            {
                cout<<y<<endl;
            }

       

    }

}

