#include<bits/stdc++.h>

using namespace std;


int main()
{

 string source; string target; vector<char> original; vector<char> changed; vector<int> cost;
    
        vector<pair<int,int>> vp;
        
        for(int i=0;i<source.size();i++)
        {
            if(source[i]!=target[i])
            {
                vp.push_back(make_pair(source[i],target[i]));
            }
        }
        
        int totcost = 0;
        for(int i=0;i<vp.size();i++)
        {
            int mincost = INT_MAX;
            int price = 0;
            int flag = 0;
            for(int j=0;j<original.size();j++)
            {
                
                if(original[j]==vp[i].first)
                {
                    flag = 1;
                    if(changed[j]==vp[i].second)
                    {
                        price = cost[j];
                    }
                    else
                    {
                        int k = j;
                        while(k<changed.size() && changed[k]!=vp[i].second)
                        {
                            price = price + cost[k];
                            k++;
                            
                        }
                        if(k==changed.size() && changed[changed.size()-1]!=vp[i].second)
                        {
                            return -1;
                        }
                    }
                }
                mincost = min(mincost,price);
            }
            if(flag ==0)
            {
                return -1;
            }
            totcost = totcost + mincost;
            
        }
        
        return totcost;
        
    

}