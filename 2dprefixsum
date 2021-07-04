#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define pb emplace_back
#define all(p) p.begin(), p.end()
#define Int long long int //use replace I with i
#define sz(x) ((int)(x).size())
#define debug(x) cout << #x << " = " << x << endl;
#define setbits(x) __builtin_popcountll(x)
#define For(i, a, b) for (int i = a; i < b; i++)
using namespace std;

//calculate the prefix sum matrix
void precompute(vector<vector<int>> &prefsum, vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){

            prefsum[i][j] += matrix[i][j];
            if(i>0)
                prefsum[i][j] += prefsum[i - 1][j];
            if(j>0)
                prefsum[i][j] += prefsum[i][j - 1];
            if(i>0 && j>0)
                prefsum[i][j] -= prefsum[i - 1][j - 1];
        }
    }
    return;
}
void solve()
{
    int n, q, r1, r2, c1, c2, m, u, k;
    cin >> n >> m >> u >> q;
    vector<vector<int>> matrix(n, vector<int>(m));
    //taking matrix from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }
    vector<vector<int>> update(n + 1, vector<int>(m + 2, 0));
    //matrix value are updated by k
    // from r1,c1 to r2,c2
    while (u--)
    {
        cin >> k >> r1 >> c1 >> r2 >> c2;
        for (int i = r1;i<=r2;i++){
            update[i][c1] += k;
            update[i][c2 + 1] -= k;
        }            
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += update[i][j];
            matrix[i][j] += sum;
        }
    }
    vector<vector<int>> prefsum(n + 1, vector<int>(m + 2, 0));
    precompute(prefsum, matrix);
    //queries for prefix sum are answer
    // for r1,c1 to r2,c2
    while (q--)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        int ans = prefsum[r2][c2];
        if(r1>0)
            ans -= prefsum[r1 - 1][c2];
        if(c1>0)
            ans -= prefsum[r2][c1 - 1];
        if(c1>0 && r1>0)
            ans += prefsum[r1 - 1][c1 - 1];
        cout << ans << endl;

    }

    //debug(n);
}
signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
#endif

    int t = 1;
    //cin >> t;
    //debug(t);
    while (t--)
    {
        solve();
    }
    cerr << "\nTime elapsed : " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n";
    return 0;
}
