#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> customer;
    multiset<int> prices;

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        prices.insert(x);
    }

    
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        customer.push_back(y);
    }

    for(int i=0;i<m;i++)
    {
        auto it = prices.upper_bound(customer[i]);

        if(it==prices.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<*(--it)<<endl;

            prices.erase(it);
            

        }


    }


}