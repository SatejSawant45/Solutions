#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        string temp="";

        int i=0;

        while(i<n)
        {
            temp.push_back(s[i]);
            if(s[i]=='a' || s[i]=='e')
            {
                if((i+2)<n && (s[i+2]=='a' || s[i+2]=='e'))
                {
                    temp.push_back('.');   
                }
                else if((i+1)<n && (i+2)!=n)
                {
                    i++;
                    temp.push_back(s[i]);
                    temp.push_back('.');

                }
            }

            i++;

        }

        cout<<temp<<endl;
    }
}