//file for modular arithmetic rule
// inclue all for rule with  default value of mod 1e9+7 we can change it when required
 
#include <bits/stdc++.h>
#define mod 1e9 + 7;
using namespace std;
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
signed main(){

    cout<<"hello world\n";
    cout << " how are you ";
    return 0;
}