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
    ll n,k,x;
    cin>>n>>k>>x;

    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    vector<ll> prefix(n+1,0);

    prefix[0] = 0;
    prefix[1] = v[0];

    for(ll i=2;i<=n;i++)
    {
        prefix[i] = prefix[i-1] + v[i-1];
    }

    debug(prefix);
    ll i=n;
       // 1 2 3 4 5 6
    ll mx = INT_MIN;
    while(i>=0)
    {
            ll ch = (n-i);
            if(ch>k) break;
        int j = min(i,x);

        ll window = prefix[i] - prefix[i-j];
        ll diff = prefix[i-j] - window;

        
        mx = max(mx,diff);
        i--;
        

        debug(mx);
        

    }
    
  ;
    
    // if(n==k &&  j<0) cout<<max(0ll,mx)<<endl;
     cout<<mx<<endl;

// ll ans = INT_MIN;

// for(ll i=n;i>=0;i--)
// {
//     ll ch = (n-i);
//     if(ch>k) break;

//     ll r  = min(i,x);

//         ll window = prefix[i] - prefix[i-r];
//         ll diff = prefix[i-r] - window;

//         ans = max(ans,diff);




// }

//      cout<<ans<<endl;

    



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