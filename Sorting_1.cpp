#include <bits/stdc++.h>

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

    //   int mini= INT_MAX;

    int i, j;

    //   for( j=0;j<v.size();j++)
    //     {
    //         mini = min(mini,v[j]);

    //     }
    // swap(mini,v[0]);

    //   for( i=0;i<v.size();i++)
    //   {
    //     int minimum = INT_MAX;
    //     int index=i;
    //     for( j=i+1;j<v.size();j++)
    //     {
    //         // minimum = min(minimum,v[j]);
    //         if(v[j]<minimum)
    //         {
    //            index = j;
    //         }

    //     }
    //     // cout<<" minimum = "<<minimum<<endl;

    //     swap(v[i],v[index]);
    // //     cout<<"At i = "<<i<<" vector is"<<endl;
    // //   for(int i=0;i<v.size();i++)
    // //   {
    // //     cout<<v[i]<<" ";
    // //   }
    // //   cout<<endl;
    //   }

    // for (i = 0; i < v.size() - 1; i++) // Update loop condition
    // {
    //     int minimumIndex = i;
    //     for (j = i + 1; j < v.size(); j++)
    //     {
    //         if (v[j] < v[minimumIndex])
    //         {
    //             minimumIndex = j;
    //         }
    //     }
    //     swap(v[i], v[minimumIndex]);
    // }

    for (i = 0; i < v.size() - 1; i++)
    {
        int minIndex = i;
        for (j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }

    cout << "The sorted vector is" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}