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
    ll n,k;
    cin>>n>>k;

    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    if(k==2 || k==3 || k==5)
    {
        ll count = 0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]%k==0)
            {
                cout<<0<<endl;
                return;
            }
        }

        ll p = 0;
        ll mindiff = INT_MAX;

        for(ll i=0;i<n;i++)
        {
            ll x = v[i]/k;
            p = k*(x+1);
            ll diff = p-v[i];
            mindiff = min(mindiff,diff);
        }

        cout<<mindiff<<endl;

    }
    else
    {
        ll count = 0;
        ll even = 0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]%k==0)
            {
                cout<<0<<endl;
                return;
            }

            if(v[i]%2==0) even++;
        }

        if(even>=2)
        {
            cout<<0<<endl;
            return;
        }
        else if(even==0)
        {
            ll p = 0;
            ll mindiff = INT_MAX;

            for(ll i=0;i<n;i++)
            {
                ll x = v[i]/k;
                p = k*(x+1);
                ll diff = p-v[i];
                mindiff = min(mindiff,diff);
            }
            ll temp = 2;
            ll ans = min(mindiff,temp);

            cout<<ans<<endl;
            return;
            

        }
        else if(even==1)
        {
            cout<<1<<endl;
            return;
        }



       

    }
    


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