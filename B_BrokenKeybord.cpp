// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         string s;
//         cin>>s;
//         vector<pair<char,int>> small;
//         vector<pair<char,int>> capital;

//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]>='a' && s[i]<='z')
//             {
//                 small.push_back(make_pair(s[i],i));
//             }
//             if(s[i]>='A' && s[i]<='Z')
//             {
//                 capital.push_back(make_pair(s[i],i));
//             }
//         }

        
//         vector<pair<char,int>> lc;
//         vector<pair<char,int>> uc;

//         for(int i=0;i<small.size();i++)
//         {
//             if(lc.size()!=0 && small[i].first == 'b')
//             {
//                lc.pop_back();
//             }
//             else if(lc.size()==0 && small[i].first == 'b')
//             {
//                continue;
//             }
//             else
//             {
//                 lc.push_back(small[i]);
//             }
            
//         }
        
//         for(int i=0;i<capital.size();i++)
//         {
//             if(uc.size()!=0 && capital[i].first == 'B')
//             {
//                uc.pop_back();
//             }
//             else if(uc.size()==0 && capital[i].first == 'B')
//             {
//                continue;
//             }
//             else
//             {
//                 uc.push_back(capital[i]);
//             }
            
//         }

//         int i=0,j=0;
//         string ans="";

//         while(i<lc.size() && j<uc.size())
//         {
//             if(lc[i].second > uc[j].second)
//             {
//                ans.push_back(uc[j].first);
//                j++;

//             }
//             else
//             {    
//                 ans.push_back(lc[i].first);
//                 i++;
//             }
            
//         }

//         while(i<lc.size())
//         {
//             ans.push_back(lc[i].first);
//             i++;
//         }
//         while(j<uc.size())
//         {
//             ans.push_back(uc[j].first);
//             i++;
//         }


//         cout<<ans<<endl;
            
          

            
//     }
// }

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

        vector<pair<int,char>> lc;
        vector<pair<int,char>> uc;

        for(int i=0;i<s.size();i++)
        {
            if(lc.size()!=0 && s[i]=='b')
            {
                lc.pop_back();
            }
            else if(uc.size()!=0 && s[i]=='B')
            {
                uc.pop_back();

            }
            else if(s[i]!='b' && s[i]!='B')
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    lc.push_back(make_pair(i,s[i]));
                }
                if(s[i]>='A' && s[i]<='Z')
                {
                    uc.push_back(make_pair(i,s[i]));
                }
            }


        }

        
        int i=0,j=0;

        set<pair<int,char>> z;

        for(auto e : lc)
        {
           z.insert(e); 
        }
        for(auto e : uc)
        {
           z.insert(e); 
        }

        for(auto e : z)
        {
            cout<<e.second;
        }
        cout<<endl;
        

        // while(i<lc.size() && j<uc.size())
        // {
        //     if(lc[i].second > uc[j].second)
        //     {
        //        cout<<uc[j].first;
        //        j++;

        //     }
        //     else
        //     {    
        //         cout<<lc[i].first;
        //         i++;
        //     }
            
        // }

        // while(i<lc.size())
        // {
        //     cout<<lc[i].first;
        //     i++;
        // }
        // while(j<uc.size())
        // {
        //     cout<<uc[j].first;
        //     i++;
        // }


        // cout<<endl;
    }
}