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
    vector<ll> v;
    ll n,m;
    cin>>n>>m;

    for(ll i=0;i<(n*m);i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    ll mx = v[(n*m)-1];
    ll mn1 = v[0];
    ll mn2 = v[1];

    ll d1 = mx - mn1;
    ll d2 = mx - mn2;

    ll cost = 0;
    cost = cost + (max(d1,d2)*max(n,m));
    cost = cost + (min(d1,d2)*min(n,m));
    cost = cost + (max(d1,d2)*((m-1)*(n-1)));

    cost = cost-d1-d2;

    mx = v[0];
    mn1 = v[(n*m)-1];
    mn2 = v[(n*m)-2];

    debug(mn1);
    debug(mn2);


    d1 = mn1 - mx;
    d2 = mn2 - mx;
    debug(d1);
    debug(d2);

    ll cost1 = 0;
    cost1 = cost1 + (max(d1,d2)*max(n,m));
    cost1 = cost1 + (min(d1,d2)*min(n,m));
    cost1 = cost1 + (max(d1,d2)*((m-1)*(n-1)));

    cost1 = cost1 - d1 -d2;

    cout<<max(cost,cost1)<<endl;




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