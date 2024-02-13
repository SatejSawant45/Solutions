#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> price;
    vector<int> customer;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        price.push_back(x);

    }

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        customer.push_back(x);

    }
    vector<int> visited(n,0);
    sort(price.begin(),price.end());

    for(int i=0;i<price.size();i++)
    {
        for(int j=0;j<customer.size();j++)
        {
            if((j==0 && price[j]>=customer[i]) && (visited[j]==0))
            {
                cout<<-1<<endl;
            }
            else if(price[j]>=customer[i] && visited[j]==0)
            {
                cout<<price[j-1]<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }



}