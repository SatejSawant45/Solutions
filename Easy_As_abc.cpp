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
    vector<string> v;
    for(ll i=0;i<3;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);   
    }

    debug(v);
           
       
       


   
    vector<string> ans;

    for(ll a=0;a<3;a++)
    {
        for(ll b=0;b<3;b++)
        {
            char ele1 = v[a][b];
            debug(ele1);
            debug(a);
            debug(b);


            for(ll c=0;c<3;c++)
            {
                for(ll d=0;d<3;d++)
                {

                  
                    if((a!=c || b!=d) && (abs(a-c)<=1 && abs(b-d)<=1))
                    {
                        char ele2 = v[c][d];  
                        debug(ele2);
                        debug(c);
                        debug(d); 
                    
                        for(ll e=0;e<3;e++)
                        {
                            for(ll f=0;f<3;f++)
                            {
                                if(((e!=c || f!=d) && (e!=a || f!=b)) && (abs(e-c)<=1 && abs(f-d)<=1))
                                {
                                    
                                    char ele3 = v[e][f];
                                    debug(ele3);
                                    debug(e);
                                    debug(f);
                                    string s;
                                    s.push_back(ele1);
                                    s.push_back(ele2);
                                    s.push_back(ele3);
                                    debug(s);

                                    ans.push_back(s);
                                    debug(ans);



                                }
                            }
                        }
                    }
                }
            }
        }
    }

    sort(ans.begin(),ans.end());

    debug(ans);

    string an = ans[0];
    std::cout<<an<<endl;

  
}

int main() 
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t;
    t=1;

    while(t--)
    {
        solve();
    }

    return 0;
}