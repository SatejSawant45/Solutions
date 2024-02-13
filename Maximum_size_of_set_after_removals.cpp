#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
#else
#define debug(x)
#endif

template <class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.first); cerr << ", "; _print(p.second); cerr << " }";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int solve()
{
    vector<int> nums1 = {1,2,3,4,5,6};
    vector<int> nums2 = {2,3,2,3,2,3};

    int sz1 = nums1.size();
       
        
        set<int> st1;
        set<int> st2;
        set<int> common;

        for(int i=0;i<nums1.size();i++)
        {
            st1.insert(nums1[i]);
            st2.insert(nums2[i]);
        }


            for(auto ele : st1)
            {
                if(st2.find(ele)!=st2.end())
                {
                    common.insert(ele);
                    
                }
            }

            debug(st1);
            debug(st2);

            int x = sz1/2;
            int s1 = st1.size();
            int s2 = st2.size();
            int c = common.size();
    
            debug(x);
            debug(s1);
            debug(s2);

            int ans = min(x,s1-c) + min(x,s2-c) + c;

            ans = min(ans,sz1);
     


        return ans;










     
}

int main() 
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t;
    cin >> t;

    while(t--)
    {
        int result = solve();
        cout<<result<<endl;
    }

    return 0;
}