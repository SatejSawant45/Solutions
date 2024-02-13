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

void solve()
{
    vector<vector<int>> grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};

        vector<int> rowMax;
        vector<int> colMax;

       

        for(int i=0;i<grid.size();i++)
        {
             int mx = INT_MIN;
            for(int j=0;j<grid[i].size();j++)
            {
                mx = max(mx,grid[i][j]);

            }
            rowMax.push_back(mx);
        }

        // mx = INT_MIN;
        for(int j=0;j<grid[0].size();j++)
        {
            int mx = INT_MIN;
            for(int i=0;i<grid.size();i++)
            {
                mx = max(mx,grid[i][j]);
            }
            colMax.push_back(mx);
        }

        int count = 0;

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                int mn = min(rowMax[i],colMax[j]);
                int x = (mn - grid[i][j]);
                debug(grid[i][j]);
                debug(rowMax[i]);
                debug(colMax[i]);
                if(x>0)
                {
                    count += x;
                    debug(x);
                    debug(count);
                    
                }
            }
        }
        cout<<count;
}

int main() 
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t=1;
   

    while(t--)
    {
        solve();
    }

    return 0;
}