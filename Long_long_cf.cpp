#include<bits/stdc++.h>

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

        long long int sum = 0;

        for(int i=0;i<n;i++)
        {
            if(v[i]<0)
            {
                sum = sum + (-1*v[i]);
            }
            else
            {
                sum = sum + v[i];
            }
        }

        int i=0;
        int c=0;
        while(i<n)
        {
            if(v[i]<0)
            {
                c++;
                while(i<n && v[i]<=0)
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }

        cout<<sum<<" "<<c<<endl;


    }
}