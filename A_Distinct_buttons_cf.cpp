#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       vector<pair<int,int>> vp;
       int n;
       cin>>n;

       vector<int> quadrants(4,0);
       vector<int> corners(4,0);

       for(int i=0;i<n;i++)
       {
            int x,y;
            cin>>x>>y;
            vp.push_back(make_pair(x,y));
       } 

       for(int i=0;i<n;i++)
       {
            if(vp[i].first==0 && vp[i].second==0)
            {
                continue;
            }
            else if(vp[i].first>=0 && vp[i].second>=0) //first quad
            {
                quadrants[0]++;
            }
            else if(vp[i].first>=0 && vp[i].second<=0) //fourth quad
            {
                quadrants[3]++;
            }
            else if(vp[i].first<=0 && vp[i].second>=0) //second quad
            {
                quadrants[1]++;
            }
            else if(vp[i].first<=0 && vp[i].second<=0) //third quad
            {
                quadrants[2]++;
            }
           

       }
        int count_zero =0;
        
       for(int i=0;i<4;i++)
       {
        if(quadrants[i]==0)
        {
            count_zero++;
        }
       

       }


       if(count_zero>=2)
       {
         cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }


    }
}