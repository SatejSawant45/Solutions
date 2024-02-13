#include<bits/stdc++.h>
using namespace std;

void generate_permutations(vector<vector<int>> &permutations,vector<int> &nums,vector<int> &ds,vector<int> &visited)
{
   if(ds.size()==nums.size())
   {
    permutations.push_back(ds);
    return;
   }

   for(int i=0;i<nums.size();i++)
   {
    if(visited[i]==0)
    {

    
      visited[i]=1;
      ds.push_back(nums[i]);
      generate_permutations(permutations,nums,ds,visited);
      ds.pop_back();
      visited[i]=0;
    }
   }
}
int main()
{
    vector<int> nums;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
      nums.push_back(i); 
    }

    // for(int p=0;p<nums.size();p++)
    // {
    //     cout<<nums[p]<<" ";
    // }
    // cout<<endl;

    vector<vector<int>> permutations;
    vector<int> ds;
    vector<int> visited(n,0);

    generate_permutations(permutations,nums,ds,visited);

    //  for(int i=0;i<permutations.size();i++)
    // {
    //     for(int j=0;j<permutations[i].size();j++)
    //     {
    //         cout<<permutations[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    for(int i=0;i<permutations.size();i++)
    {
       int count = 0;
       for(int j=0;j<permutations[i].size()-1;j++)
       {
          if(abs(permutations[i][j] - permutations[j][i]) == 1)
          {
            count = 1;
            break;
          }   
       }
       if(count == 0)
       {
          for(int x=0;x<permutations[i].size();x++)
          {
             cout<<permutations[i][x]<<" ";
          } 
          return 0;
       }
       
    }

    cout<<"NO SOLUTION"<<endl;

}