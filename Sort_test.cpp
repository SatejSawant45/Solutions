#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    vector<vector<string>> nums = {
        {"a","0549"},
        {"b","0457"},
        {"a","0532"},
        {"a","0621"}
        // {"a","0549"}
    };
sort(nums.begin(),nums.end());
        
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<string> ans;
     
        for(int i=0;i<nums.size();i++)
        {
            if(i+2<nums.size())
            {
                string a = nums[i][1];
                string b = nums[i+1][1];
                string c = nums[i+2][1];
                int x = stoi(a);
                
                int y = stoi(b);
                int z = stoi(c);
                
                if((y-x)<99 && (z-x)<99)
                {
                    ans.push_back(nums[i][0]);
                }
            }
            
        }

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
}

// #include <iostream>
// #include <string>
// using namespace std;
 
// // Driver code
// int main()
// {
//   string str1 = "45";
//   string str2 = "3.14159";
//   char str3[] = "31337 geek";
 
//   // type of explicit type casting
//   int myint1 = stoi(str1);
   
//   // type of explicit type casting
//   int myint2 = stoi(str2);
     
//   // type of explicit type casting
//   int myint3 = stoi(str3);
 
//   cout << "stoi(\"" << str1 << 
//           "\") is " << myint1 << '\n';
//     cout << "stoi(\"" << str2 << 
//             "\") is " << myint2 << '\n';
//     cout << "stoi(\"" << str3 << 
//             "\") is " << myint3 << '\n';
//     return 0;
// }