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
    map<string,int> m;
    map<string,int> gd;
        
        for(int i=1;i<=12;i++)
        {
            string s1,s2;
            int n1,n2;
            cin>>s1>>n1>>s2>>n2;
            
            int d1 = n1-n2;
            int d2 = n2-n1;
            
            gd[s1] = gd[s1] + d1;
            gd[s2] = gd[s2] + d2;
            
            if(n1>n2)
            {
                m[s1] = m[s1] + 3;
            }
            else if(n2>n1)
            {
                m[s2] = m[s2] + 3;
            }
            else
            {
                m[s1] = m[s1] + 1;
                m[s2] = m[s2] + 1;
            }
        }

        debug(m);
        debug(gd);
        
        vector<pair<pair<int,int>,string>> rankings;//((pair of m[s],gd[s]),name);
        
        for(auto pr : m)
        {
            rankings.push_back(make_pair(make_pair(pr.second,gd[pr.first]),pr.first));
        }
        
        sort(rankings.rbegin(),rankings.rend());

        debug(rankings);
        
        cout<<rankings[0].second<<" "<<rankings[1].second<<endl;
        
        
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
        solve();
    }

    return 0;
}