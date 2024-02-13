#include<bits/stdc++.h>
using namespace std;

int N;

int main()
{
    vector<long long> v;
    long long n;
    cin>>n;

    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }

    long long moves = 0;

    for(long long i=1;i<v.size();i++)
    {
        long long diff = v[i-1] - v[i];
        if(diff>0)
        {
           moves = moves + diff;
           v[i]=v[i-1];
        }
      
    }

    cout<<moves;
}