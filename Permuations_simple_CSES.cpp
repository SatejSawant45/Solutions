#include<bits/stdc++.h>

using namespace std;

int N;

int main()
{
  cin>>N;

  if(N==1)
  {
    cout<<1;
  }
  else if(N==2 || N==3)
  {
    cout<<"NO SOLUTION";
  }
  else
  {
     for(int i=2;i<=N;i=i+2)
     {
        cout<<i<<" ";
     }
     for(int i=1;i<=N;i=i+2)
     {
        cout<<i<<" ";
     }
  }
  

}