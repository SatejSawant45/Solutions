#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;

   

    int lastB=0, firstA=n;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            firstA=min(firstA,i);
            
        }
        else
        {
            lastB = i;
        }
    }
    

    cout<<max(0,(lastB-firstA))<<endl;

    //  int n;
    //     cin >> n;
    //     string s;
    //     cin >> s;
    //     int mn = n, mx = 0;
    //     for (int i = 0; i < n; i++) {
    //         if (s[i] == 'A') mn = min(mn, i);
    //         else mx = i;
    //     }
 
    //     cout << max(0, mx - mn) << "\n";

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}