#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int ropes=0;

        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;

            if(b<a)
            {
                ropes++;
            }

        }

        cout<<ropes<<endl;
    }
}