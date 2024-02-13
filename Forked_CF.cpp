#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<pair<int,int>> king;
        vector<pair<int,int>> queen;

        int a,b,kx,ky,qx,qy;
        cin>>a>>b>>kx>>ky>>qx>>qy;

        king.push_back(make_pair(kx+a,ky+b));
        king.push_back(make_pair(kx+a,ky-b));
        king.push_back(make_pair(kx-a,ky+b));
        king.push_back(make_pair(kx-a,ky-b));
        king.push_back(make_pair(kx+b,ky+a));
        king.push_back(make_pair(kx+b,ky-a));
        king.push_back(make_pair(kx-b,ky+a));
        king.push_back(make_pair(kx-b,ky-a));
        

        queen.push_back(make_pair(qx+a,qy+b));
        queen.push_back(make_pair(qx+a,qy-b));
        queen.push_back(make_pair(qx-a,qy+b));
        queen.push_back(make_pair(qx-a,qy-b));
        queen.push_back(make_pair(qx+b,qy+a));
        queen.push_back(make_pair(qx+b,qy-a));
        queen.push_back(make_pair(qx-b,qy+a));
        queen.push_back(make_pair(qx-b,qy-a));

      



        

       set<pair<int,int>> ans;
        for(auto it1 : king)
        {
            for(auto it2 : queen)
            {
                if(it1.first==it2.first && it1.second == it2.second)
                {
                    ans.insert(it1);

                }
            }
        }
        cout<<ans.size()<<endl;







        

    }
}