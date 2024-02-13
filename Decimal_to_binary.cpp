#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;

    // while(n>0)
    // {
    //     int rem = n % 2;
    //     s = s + to_string(rem);
    //     n = n / 2;

    // }
    // cout<<s<<endl;

    for(int i=10;i>=0;i--)
    {
        cout<<((n>>i)&1)<<" ";
    }
}