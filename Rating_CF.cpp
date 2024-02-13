#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int x = s.size()/2;
        
        int n = s.size();
        // cout<<x<<endl;
    while(x>=0)
    {
    
      if(x==0)
      {
        // cout<<x<<endl; //---
        cout<<-1<<endl;
        break;

      }
      else if(s[x]!='0')
      {

      

        string temp1 = s.substr(0,x);
        string temp2 = s.substr(x,n-x);

        int num1 = stoi(temp1);
        int num2 = stoi(temp2);


        // cout<<x<<"El if"<<endl; //---

        if(num1<num2)
        {
            cout<<num1<<" "<<num2<<endl;
            break;
          
        }
        else
        {
            // cout<<x<<endl; //---
            x--;

        }

      }
      else
      {
        // cout<<x<<endl; //---
        x--;
      }

      
    }

    }

}