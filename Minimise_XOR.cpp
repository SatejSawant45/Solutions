#include<bits/stdc++.h>

using namespace std;

void printBinary(int n)
{
     for(int i=10;i>=0;i--)
    {
        cout<<((n>>i)&1)<<" ";
    }
    cout<<endl;
}

int main()
{

    int num1 = 3,num2 = 5;
    int setBits = __builtin_popcount(num2);
    
        int y=0;

        for(int i=10;i>=0;i--)
        {
            if(((num1 & (1<<i)) != 0) && setBits>0) //check if ith bit of num1  is set 
            {
                // cout<<"Result of if  for i = "<<i<<" is "<<(num1 & (1<<i) != 0)<<endl;
                // printBinary(num1);
                // printBinary(1<<i);
                // printBinary(num1&(1<<i));
                // printBinary(num1&(1<<i)!=0);
                
                y = (y | (1<<i));   // set / toggle ith bit in y
                
                 setBits--;
            }

        }

        cout<<y<<endl;

        if(setBits>0)
        {
            for(int i=0;i<11;i++)
            {
                if(((y & (1<<i)) == 0) && setBits>0) //check if ith bit of y os unset;
                {
                    y = (y | (1<<i));   // ser/toggle ith bit in y
                    setBits--;  
                }
            }
        }

        cout<<y<<endl;
}