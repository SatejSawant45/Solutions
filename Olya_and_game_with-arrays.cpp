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
    ll n;
    cin>>n;

    vector<vector<ll>> v;
    for(ll i=0;i<n;i++)
    {
        ll m;
        cin>>m;
        vector<ll> temp;
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    debug(v);

    for(ll i=0;i<n;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    debug(v);

    vector<ll> minv;
    vector<ll> secminv;

 

    for(ll i=0;i<n;i++)
    {
        minv.push_back(v[i][0]);
        secminv.push_back(v[i][1]);
    }

    sort(minv.begin(),minv.end());
    sort(secminv.begin(),secminv.end());

    secminv[0] = min(secminv[0],minv[0]);

    debug(secminv);

    ll sum = 0;
    for(ll i=0;i<n;i++)
    {
        sum = sum + secminv[i];
    }

    cout<<sum<<endl;
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