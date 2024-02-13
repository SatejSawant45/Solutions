#include<bits/stdc++.h>
using namespace std;

int checkRepeatation(string s)
{
    if(s.size()==1)
    {
        
        return 1;
    }

    int prevch = s[0];
    int count=1;
    int maxcount=1;

    for(int i=1;i<s.size();i++)
    {
        if(s[i]==prevch)
        {
           count++;
           maxcount = max(maxcount,count);
           prevch = s[i];
        }
        else
        {
           count=1;
           prevch = s[i];


        }
         maxcount = max(maxcount,count);
    }
    return maxcount;

}

int main()
{
    string s;
    cin>>s;

    int ans = checkRepeatation(s);

    cout<<ans<<endl;
    
}