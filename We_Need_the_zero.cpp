#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<int> a;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }

        // int flag = 0;
        // for(int i=0;i<256;i++)
        // {
        //     vector<int> temp; //XOR array
        //     for(int j=0;j<n;j++)
        //     {
        //         int z;
        //         z = i ^ a[j];
        //         temp.push_back(z);
        //     }
        //     int zor =0;
        //     for(int j=0;j<n;j++)  // finding XOR of XOR array
        //     {
        //         zor = zor ^ temp[j];
        //     }

        //     if(zor==0)
        //     {
        //         cout<<i<<endl;
        //         flag = 1;
        //         break;
        //     }
        // }

        // if(flag == 0)
        // {
        //     cout<<-1<<endl;

        // }

        int z = 0;
        for(int i=0;i<n;i++)
        {
            z = z ^ a[i];

        }

        if(n%2==0)
        {
            if(z==0)
            {
                cout<<z<<endl;
            }
            else
            {
                cout<<-1;
            }
        }
        else
        {
            if(z>=0 && z<256)
            {
            cout<<z<<endl;
            }
            else
            {
                cout<<-1;
            }


        }


    }
}