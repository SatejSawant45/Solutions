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
    vector<ll> a;
    vector<ll> b;
    unordered_set<ll> st;
    ll n;
    cin>>n;

    map<ll,ll> m;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
        st.insert(x);
    }
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        b.push_back(x);
        st.insert(x);
    }

    ll mx = INT_MIN;

    map<ll,ll> ca;
    map<ll,ll> cb;

    ll count = 1;

    for(ll i=0;i<(n-1);i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        else
        {
            ca[a[i]] = max(count,ca[a[i]]);
            count = 1;
        }
        
    }

    ca[a[n-1]] = max(count,ca[a[n-1]]);

    count = 1;

    for(ll i=0;i<(n-1);i++)
    {
        if(b[i]==b[i+1])
        {
            count++;
        }
        else
        {
            cb[b[i]] = max(count,cb[b[i]]);
            count = 1;
        }
        
    }

    cb[b[n-1]] = max(count,cb[b[n-1]]);

    debug(ca);
    debug(cb);

    ll ans = INT_MIN;
    ll temp = 0;

    for(auto x : st)
    {
        temp = ca[x] + cb[x];
        ans = max(ans,temp);
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