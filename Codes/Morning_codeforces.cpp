#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        
        int x , y;
        
        x = stoi(s);
        int dig = 0;
        while(x > 0)
        {
            dig = x%10;
            count++;
            if(count>0 && x == y)
            {
                count++;
            }
            else if(count>0 && (x!=y))
            {
                count = count + abs(x-y);
            }
            x = x/10;
            y = dig;


        }
        cout<<count;
    }
}