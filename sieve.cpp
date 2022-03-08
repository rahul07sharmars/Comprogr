#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fastio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define pb emplace_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(p) p.begin(), p.end()
#define Int long long int //use replace I with i
#define sz(x) ((int)(x).size())
#define setbits(x) __builtin_popcountll(x)
#define For(i, a, b) for (int i = a; i < b; i++)

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

typedef unsigned long long ull;
typedef long double lld;

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

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

// O(sqrt n)
bool isPrime(int n){
    if(n==1)    return false;
    for (int i = 2; i * i <= n;i++)
        if(n%i==0)
            //n is divisible by i, n is not prime number
            return false;
    //No integer from 2 to n-1 divides n:n is prime number
    return true;
}


// in form of boolean character 
//O(n*log(log(n)))
int n = 10e6;
vector<bool> is_prime(n + 1, true);
// is_prime[0] = is_prime[1] = false;
void compute_prime(){
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
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
