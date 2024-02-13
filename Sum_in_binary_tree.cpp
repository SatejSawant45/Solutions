#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        long long int sum = n;

        while(n>0)
        {
            n = n/2;
            sum = sum+n;
        }

        cout<<sum<<endl;
    }
}