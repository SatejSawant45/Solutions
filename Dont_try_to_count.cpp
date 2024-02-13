#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int count = 0;
        int n,m;
        cin>>n>>m;

        string x , s;
        cin>>x>>s;
        

        while(x.size()<m)
        {
            x = x + x;
            count++;
        }
        
        int i=0;
        int flag=0;
        int flag1=0;
        int q=1;
        do{

        while(i+m<=x.size())
        {
            string temp = x.substr(i,m);
            if(temp == s)
            {
                cout<<count<<endl;
                flag = 1;
                flag1 = 1;
                break;
            }
            i++;
        }
            if(flag1==1)
            {
                break;
            }
            x = x + x;
            count++;
        }while(q--);

        if(flag==0)
        {
            cout<<-1<<endl;
        }
    }

}