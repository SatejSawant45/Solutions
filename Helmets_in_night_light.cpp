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
    vector<pair<ll,ll>> vp;
    vector<ll> v1;
    vector<ll> v2;
    ll n,k;
    cin>>n>>k;

    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    
    
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v2.push_back(x);
    }

    for(ll i=0;i<n;i++)
    {
        vp.push_back(make_pair(v2[i],v1[i]));
    }

    sort(vp.begin(),vp.end());

    debug(vp);

    ll cost = k;
    ll count = 1;
    ll i = 0;

    while(i<n && count<n)
    {
        ll x = min(k,vp[i].first);

        if(x == vp[i].first)
        {
            ll y = n- count;
            count = count + min(y,vp[i].second);
            cost = cost + (min(y,vp[i].second)*vp[i].first);
        }
        else if(x == k)
        {
            count = count + 1;
            cost = cost + k;
        }

        i++;

    }

    cout<<cost<<endl;

    
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