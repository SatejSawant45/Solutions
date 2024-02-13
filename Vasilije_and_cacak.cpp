#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;

        long long net = (n*(n+1))/2;
        long long  minsum = (k*(k+1))/2;
        long long index = n-k;
        long long maxsum = (net - (index*(index+1))/2);

        if(x>=minsum && x<=maxsum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}

