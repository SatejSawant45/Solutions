#include<bits/stdc++.h>

using namespace std;

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
    
    for(int i=0;i<v.size()-1;i++)
    {
        // if(v[i]>v[i+1])
        // {
            int j=i+1;
            while(j-1>=0 && v[j-1]>v[j])
            {
                swap(v[j-1],v[j]);
                j--;

            }
        // }
    }


    cout << "The sorted vector is" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}