#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       
        /*
        c1 c2 c3
        c4 c5 c6
        c7 c8 c9
        */

        char c1,c2,c3,c4,c5,c6,c7,c8,c9;
        cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9;
        if(((c1==c2 && c2==c3)&& c1!='.'))
        {
            cout<<c1<<endl;
        }
        else if(((c4==c5 && c5==c6)&& c4!='.'))
        {
            cout<<c4<<endl;
        }
        else if(((c7==c8 && c8==c9)&& c7!='.'))
        {
            cout<<c7<<endl;
        }
        else if(((c1==c4 && c4==c7)&& c1!='.'))
        {
            cout<<c1<<endl;
        }
        else if(((c2==c5 && c5==c8)&& c2!='.'))
        {
            cout<<c2<<endl;
        }
        else if(((c3==c6 && c6==c9)&& c3!='.'))
        {
            cout<<c3<<endl;

        }
        else if(((c1==c5 && c5==c9)&& c1!='.'))
        {
            cout<<c1<<endl;
        }
        else if(((c3==c5 && c5==c7)&& c3!='.'))
        {
            cout<<c3<<endl;

        }
        else 
        {
            cout<<"DRAW"<<endl;
        }
       
        
    }
}