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

void solve(vector<char> &vc)
{
    vector<ll> v;
    ll n;
    cin>>n;
    vector<char> ans(n,'0');
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    // ll mx = 0;
    // for(ll i=0;i<n;i++)
    // {
    //     mx = max(mx,v[i]);
    // }

    // for(ll i=0;i<=mx;i++)
    // {
    //     ll x = 0;
    //     for(ll j=0;j<n;j++)
    //     {
    //         if(v[j]==i)
    //         {
    //             ans[j] = vc[x];
    //             x++;
    //         }
    //     }
    // }

    map<ll,vector<ll>> m;

    for(ll i=0;i<n;i++)
    {
        m[v[i]].push_back(i);
    }

    for(auto pr : m)
    {
        ll x = 0;
        ll sz = pr.second.size();
        for(ll i=0;i<sz;i++)
        {
            ans[pr.second[i]] = vc[x];
            x++;
        }
    }

    // debug(m);

    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
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
        vector<char> vc;
        char ch = 97;
        for(ll i=1;i<=26;i++)
        {
            vc.push_back(ch);
            ch++;
        }

        solve(vc);
    }

    return 0;
}