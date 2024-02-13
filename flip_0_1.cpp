#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

     int flag = 0;
        int x=0;
        for(x=0;x<s.size();x++)
        {
            if(s[x]=='0' && flag==0)
            {
                continue;
            }
            else if(s[x]=='1' && flag == 0)
            {
                flag=1;
                continue;
            }
            else if(s[x]=='1' && flag==1)
            {
                continue;
            }
            else 
            {
                break;
            }
        


        }

        if(x==s.size()) cout<<0;
        else cout<<1;
}