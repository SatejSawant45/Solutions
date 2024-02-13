// #include<bits/stdc++.h>
// using namespace std;
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define nline "\n"
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462
// #define set_bits __builtin_popcountll
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}
// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// #else
// #define debug(x)
// #endif

// template <class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.first); cerr << ", "; _print(p.second); cerr << " }";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// void solve()
// {
//     ll n,m,k;
//     cin>>n>>m>>k;

//     ll x,y;
//     cin>>x>>y;

//     ll vika = ((x+y)&1);  // 1 = odd(black)  0 = even(white)

    
//       debug(k);
//       debug(n);
//       debug(m);
//       debug(x);
//       debug(y);
//       debug(vika);

//     while(k--)
//     {
//         ll x1,y1;
//         cin>>x1>>y1;

//         ll fr = ((x1+y1)&1);

//         debug(k);
//         debug(vika);
//         debug(fr);
//         cerr<<endl;
//         if(fr==vika) 
//         {
//             cerr<<"NO"<<endl;
//             cout<<"NO"<<endl;
//             return;  
//         } 
//THis method gives wrong output when multiple test cases are passed .
//This is due to the fact that the input is being taken within the loop itself. 
//when return statement is executed , the immidiate next number is taken as inupt which is wrong.  
//     }

//     cout<<"YES"<<endl;
//     cerr<<"YES"<<endl;
// }

// int main() 
// {
// #ifndef ONLINE_JUDGE
//     freopen("Error.txt", "w", stderr);
// #endif

//     ll t;
//     cin >> t;

//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }



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
    ll n,m,k;
    cin>>n>>m>>k;
 
    ll x,y;
    cin>>x>>y;
 
    ll vika = ((x+y)&1);  // 1 = odd(black)  0 = even(white)
 
    ll flag  = 0;

  
    
 
 
    while(k--)
    {
        ll x1,y1;
        cin>>x1>>y1;
 
        ll fr = ((x1+y1)&1);

 
        if(fr==vika) 
        {
            
            flag  = 1;
            
        } 
 
    }
 
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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