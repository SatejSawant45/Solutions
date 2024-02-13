#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N = 5;
    int arr[5] = {1,2,3,4,5};

     string s="";
        
        for(int i=0;i<N;i++)
        {
            string temp = to_string(arr[i]);
            s = s + temp;
              
        }
        long long num = stoi(s);
        
        long long sum=0;
        
        while(num>0)
        {
            int digit = num % 10;
            sum = sum + digit;
            num = num/10;
        }
        
        if(sum%3==0)
        {
           cout<<1;
           return 0;
        }
        cout<<0;
}