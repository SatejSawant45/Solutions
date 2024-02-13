#include<bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<(1<<0)<<endl;
    // cout<<(1<<1)<<endl;
    // cout<<(1<<4)<<endl;
    // cout<<(1<<6)<<endl;
    // cout<<(1<<9)<<endl;

    int a = 12 ,b = 5 , n = 4;


        int xor1=0;
        int maxxor1=INT_MIN;
        int xor2=0;
        int maxxor2=INT_MIN;
        int lim = (1<<n);
        int m =INT_MIN;
        for(int i=0;i<lim;i++)
        {
            xor1 = a ^ i;
            xor2 = b ^ i;
            maxxor1 = xor1 * xor2;

            m = max(m,maxxor1);
            
            
            
            

        }

        cout<<m<<endl;

        // cout<<endl;


        
        // // int lim = (1<<n);
        // for(int i=0;i<lim;i++)
        // {
        //     xor2 = b ^ i;
        //     maxxor2 = max(maxxor2,xor2);
        //     cout<<maxxor2<<endl;

        // }

        // cout<<maxxor2<<endl;
        // cout<<endl;

        // int ans = maxxor1*maxxor2;

        // cout<<ans<<endl;


}