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

    map<ll,ll> m;

    for(ll i=0;i<n;i++)
    {
        m[v[i]]++;
    }

    debug(m);
    debug(v);

    if(m.size()==1 and m[v[0]]>=k)
    {
        cout<<"YES"<<endl;
        return;
    }

    if(m[v[0]]>=k && m[v[n-1]]>=k)
    {
        if(v[0]==v[n-1])
        {
            debug(v[0]);
            debug(v[n-1]);
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            // int i=n-1;
            // ll count = 0;
            // ll temp = m[v[0]];
            // if(temp!=k)
            // {

            
            // while(i>=0 && temp!=k)
            // {
            //     debug(i);
            //     if(v[i]==v[n-1])
            //     {
            //         count++;
            //     }
            //     if(v[i]==v[0])
            //     {
            //         temp--;
            //     }
            //     i--;
            // }
            // } 
            // else
            // {
            //     while(i>=0 &&v[i]!=v[0])
            //     {
            //     debug(i);
            //     if(v[i]==v[n-1])
            //     {
            //         count++;
            //     }
                
            //     i--;
            //     }
            // }
            // debug(count);
            // if(count>=k) cout<<"YES"<<endl;
            // else cout<<"NO"<<endl;

            vector<ll> prefixfirst(n,-1);
            vector<ll> prefixlast(n,-1);

            ll count = 0;
            debug(count);
            for(int i=0;i<n;i++)
            {
                if(v[i]==v[0])
                {
                    count++;
                }
                prefixfirst[i] = count;

            }

            debug(prefixfirst);
            
            count = 0;
            for(int i=n-1;i>=0;i--)
            {
                if(v[i]==v[n-1])
                {
                    count++;
                }
                prefixlast[i] = count;
            }
            debug(prefixfirst);
            debug(prefixlast);


            for(int i=0;i<n;i++)
            {
                if(prefixfirst[i]>=k && prefixlast[i]>=k)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }

            cout<<"NO"<<endl;
            return;


        }
    }
    else
    {
        cout<<"NO"<<endl;
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