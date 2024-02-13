#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

      if(arr.size()<3)
        {
            return false;
        }
        int n = arr.size();
        vector<int> visited(n,0);
        visited[0]=-1;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]<arr[i])
            {
                visited[i] = 1;
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<visited[i]<<" ";
        }
        cout<<endl;
         
          
        vector<int> temp = visited;
        sort(temp.begin()+1,temp.end());
        reverse(temp.begin()+1,temp.end());

        for(int i=0;i<n;i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
         
        for(int i=1;i<temp.size();i++)
        {
            if(visited[i]!=temp[i])
            {
                cout<<"false";
                return 0;
            }
        }
        cout<<"true";
        return 0;
        
}