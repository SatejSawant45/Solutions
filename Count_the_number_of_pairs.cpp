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
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    ll ans = 0;

    // unordered_map<char,pair<ll,ll>> m;
    // for(ll i=0;i<n;i++)
    // {
    //     m[s[i]].first++;
    // }

    // for(auto pr : m)
    // {
    //     if(pr.second.second<1)
    //     {




    //         char c1 = pr.first;
    //         char c2;
    //         if(isupper(c1))
    //         {
    //             c2 = tolower(c1);
    //         }
    //         else
    //         {
    //             c2 = toupper(c1);
    //         }
    //         debug(c1);
    //         debug(c2);

    //         m[c1].second = 1;
    //         m[c2].second = 1;

    //         ans = ans + min(m[c1].first,m[c2].first);
    //     }
    // }



    
    // // debug(m);
    // // cout<<ans<<endl;

    // for(auto pr : m)
    // {
    //     if(pr.second.second<=1)
    //     {
    //         char c1 = pr.first;
    //         char c2;
    //         if(isupper(c1))
    //         {
    //             c2 = tolower(c1);
    //         }
    //         else
    //         {
    //             c2 = toupper(c1);
    //         }
    //         debug(c1);
    //         debug(c2);

    //         m[c1].second = 2;
    //         m[c2].second = 2;

    //         ll diff = (abs(m[c1].first - m[c2].first)/2);

    //         ans = ans + (min(k,diff));

    //         k = k - diff;

    //         if(k<=0)
    //         {
    //             break;
    //         }


    //     }

        
    // }
    // cout<<ans<<endl;

    vector<ll> capital(26,0);
    vector<ll> small(26,0);

    for(ll i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital[s[i] - 'A']++;
        }
        else
        {
            small[s[i] - 'a']++;
        }
    }

    for(ll i=0;i<26;i++)
    {
        ans = ans + min(capital[i],small[i]);
    }

    for(ll i=0;i<26;i++)
    {
        ll temp = abs(capital[i]-small[i])/2;

        ans = ans + min(k,temp);
        k = k - temp;
        if(k<=0) break;
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