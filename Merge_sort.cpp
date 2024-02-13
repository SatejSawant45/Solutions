#include<bits/stdc++.h>
using namespace std;



vector<int> recur(vector<int> &arr,int l,int r,vector<int> &ans)
{

    if(l>=r)
    {
      return ans; 
        
    }
    
    int x  = (l+r)/2;
    vector<int> temp1;
    vector<int> temp2;
    temp1 = recur(arr,l,x,temp1);
    temp2 = recur(arr,x+1,r,temp2);

    int i=0,j=0;

    while(i<temp1.size() && j<temp2.size())
    {
       if(temp1[i]<=temp2[j])
       {
           ans.push_back(temp1[i]);
           i++;
       }
       else if(temp2[j]<=temp1[i])
       {
           ans.push_back(temp2[j]);
           j++;
       }
    }

    while(j<temp2.size())
    {
        ans.push_back(temp2[j]);
        j++;
    }
    while(i<temp1.size())
    {
        ans.push_back(temp1[i]);
        i++;
    }

    return ans;



}

vector<int> mergeSort(vector<int> &arr, int l, int r) 
{
    vector<int> ans;
    ans = recur(arr,l,r,ans);
    // for(int i=0;i<ans.size();i++)
    // {
    //     arr[i] = ans[i];
    // }
    // arr = ans;
    return ans;
   
}


int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    
    v = mergeSort(v,0,v.size()-1);

    cout << "The sorted vector is" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}