#include<bits/stdc++.h>

using namespace std;

// void permutations(vector<int> &nums , vector<int> &visited,vector<int> &ds, vector<vector<int>> &ans)
// {
//     if(ds.size()==nums.size())
//     {
//         ans.push_back(ds);
//         return;
//     }
 
//     for(int i=0;i<nums.size();i++)
//     {
//         if(visited[i]==0)
//         {
//             visited[i]=1;
//             ds.push_back(nums[i]);
//             permutations(nums,visited,ds,ans);
//             visited[i]=0;
//             ds.pop_back();

//         }

//     }
// }

void second_approach(vector<long long> &nums,long long  i,vector<vector<long long>> &ans)
{
    if(i==nums.size())
    {
       ans.push_back(nums);
        return;
    }

    for(int j=i;j<nums.size();j++)
    {
         swap(nums[i],nums[j]);
         second_approach(nums,i+1,ans);
         swap(nums[i],nums[j]);
    }
}


void check_beautiful(vector<vector<long long>> &ans)
{
   for(long long i=0;i<ans.size();i++)
    {
       int count = 0;
     
       for(long long j=0;j<ans[i].size()-1;j++)
       {
          if(abs(ans[i][j] - ans[i][j+1]) == 1)
          {
            count = 1;
            break;
          }   
       }
       if(count == 0)
       {
          for(long long x=0;x<ans[i].size();x++)
          {
             cout<<ans[i][x]<<" ";
          } 
          return;
       }
       
    }
    cout<<"NO SOLUTION"<<endl;
    return;
}


int main()
{
    vector<long long> nums;
    long long n;
    cin>>n;

    for(long long  i=1;i<=n;i++)
    {
      
        nums.push_back(i);
    }
    // vector<int> visited(n,0);
    // vector<int> ds;
    vector<vector<long long>> ans;

    // permutations(nums,visited,ds,ans);
    long long i=0;
    second_approach(nums,i,ans);
    
    check_beautiful(ans);
}