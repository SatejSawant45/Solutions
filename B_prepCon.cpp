#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<string> s;
        for(int i=1;i<=n;i++)
        {
            string c = to_string(i);
            s.push_back(c);
           
        }
   

        reverse(s.begin()+k,s.end());

        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;



    }
}