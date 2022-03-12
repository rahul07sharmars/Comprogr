#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fastio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define pb emplace_back
#define ff first
#define ss second
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define all(p) p.begin(), p.end()
#define Int long long int //use replace I with i
#define sz(x) ((int)(x).size())
#define setbits(x) __builtin_popcountll(x)
#define For(i, a, b) for (int i = a; i < b; i++)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x);cerr << endl;
#else
#define debug(x)
#endif

typedef unsigned long long ull;
typedef long double lld;

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
//template <class T, class V> void _print(pair <T, V> p);
//template <class T> void _print(vector <T> v);
//template <class T> void _print(set <T> v);
//template <class T, class V> void _print(map <T, V> v);
//template <class T> void _print(multiset <T> v);
//template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}\n";}
//template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}

//function to calculate prime factors of number n
//for n=8 vector will contain [2, 2, 2]
vector<int> primeFactorizationOfN(int n)
{
    vector<int> ans;
    while (n % 2 == 0)
    {
        ans.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ans.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        ans.push_back(n);
    return ans;
}
//return all the unique divisors of n
//Time Complexity:O(sqrt(N))
unordered_set<int> Divisors(int n)
{
    unordered_set<int> mp;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 )
        {
            if (n / i == i )
                mp.insert(i);
            else 
            {
                mp.insert(i);
                mp.insert(n / i);
            }
        }
    }   
    return mp;
}

void solve()
{
    int n;
    cin >> n;
    debug(n);
}
signed main()
{
    fastio()
#ifndef ONLINE_JUDGE
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int t = 1;
    cin >> t;
    debug(t);
    while (t--)
    {
        solve();
    }
    cerr << "\nTime elapsed : " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n";
    return 0;
}
