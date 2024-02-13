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
    string a,b;
    cin>>a>>b;

    ll n = a.size();
    ll m = b.size();

    string ans="";
    // ans.push_back(a[0]);
    // ans = ans + "*";
    

    if(a[0]==b[0])
    {
        cout<<"YES"<<endl;
        ans.push_back(a[0]);
        ans = ans + "*";
        cout<<ans<<endl;
        return;
    }
    if(a[n-1]==b[m-1])
    {
        cout<<"YES"<<endl;
        ans = ans + "*";
        ans.push_back(a[n-1]);
        cout<<ans<<endl;
        return;
    }

    for(ll i=0;i<(n-1);i++)
    {
        string temp1;
        temp1.push_back(a[i]);
        temp1.push_back(a[i+1]);
       
        for(ll j=0;j<(m-1);j++)
        {
            string temp2;
            temp2.push_back(b[j]);
            temp2.push_back(b[j+1]);
           
            if(temp1 == temp2)
            {
                cout<<"YES"<<endl;
                ans = ans + "*";
                ans = ans + temp1;
                ans = ans + "*";
                cout<<ans<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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