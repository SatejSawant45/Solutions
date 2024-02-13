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
    string s1,s2;
    cin>>s1>>s2;
    string ns1,ns2;

    ll sz1 = s1.size();
    ll sz2 = s2.size();

    if(sz1<sz2)
    {
        ll diff = sz2-sz1;
        for(ll i=0;i<diff;i++)
        {
            ns1.push_back('0');
        }
        ns1 = ns1 + s1;
        ns2 = s2;
    }
    else if(sz2<sz1)
    {
        ll diff = sz1-sz2;
        for(ll i=0;i<diff;i++)
        {
            ns2.push_back('0');
        }
        ns2 = ns2 + s2;
        ns1 = s1;
    }
    else
    {
        ns1 = s1;
        ns2 = s2;
    }

    debug(ns1);
    debug(ns2);

    int sz = ns1.size();

    ll ans = 0;

    for(ll i=0;i<ns1.size();i++)
    {
        if(ns1[i]!=ns2[i])
        {
            ll x1 = abs(ns1[i]-ns2[i]);
            debug(x1);
             ans = x1 + (sz-i-1)*9;
            break;
        }
    }

    cout<<ans<<endl;



    



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