#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<long long> v;

        int a,b,n;
        cin>>a>>b>>n;

        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        long long  count = b;

        // while(b--)
        // {
        //     if(b==0 && i<n) 
        //     {
        //         b  = min(b+v[i],a);
        //         i++;
        //     }

        //     count++;
        // }

        for(int i=0;i<n;i++)
        {
            if(v[i]<a-1)  //because we are adding a new element when c = 1 . Therefore distance from 1 to a = a-1. hence we use a-1 insted of a
            {
                count = count + v[i];
            }
            else
            {
                count = count + a-1;
            }
        }

        cout<<count<<endl;



    }
}