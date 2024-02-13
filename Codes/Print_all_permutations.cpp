#include<bits/stdc++.h>

using namespace std;

void permutations(vector<int> &nums , vector<int> &visited,vector<int> &ds, vector<vector<int>> &ans)
{
    if(ds.size()==nums.size())
    {
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<nums.size();i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            ds.push_back(nums[i]);
            permutations(nums,visited,ds,ans);
            visited[i]=0;
            ds.pop_back();

        }

    }
}

void second_approach(vector<int> &nums,int i,vector<vector<int>> &ans)
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

int main()
{
    vector<int> nums;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int> visited(n,0);
    vector<int> ds;
    vector<vector<int>> ans;

    // permutations(nums,visited,ds,ans);
    int i=0;
    second_approach(nums,i,ans);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}