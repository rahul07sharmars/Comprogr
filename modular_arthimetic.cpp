//file for modular arithmetic rule
// inclue all for rule with  default value of mod 1e9+7 we can change it when required
 
#include <bits/stdc++.h>
#define mod 1e9 + 7;
using namespace std;

int expo(int a, int b, int mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1)res = (res * a) % mod; 
        a = (a * a) % mod; 
        b = b >> 1;
    } 
    return res;
}

int mminvprime(int a, int b) {return expo(a, b - 2, b);}
// addition operation
int mod_add(int a, int b, int m) {
    a = a % m; b = b % m; return (((a + b) % m) ) % m; }
//multiplication
int mod_mul(int a, int b, int m) {
    a = a % m; b = b % m; return (((a * b) % m) ) % m; }
// subtration
int mod_sub(int a, int b, int m){
    a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
// division
//fermit little theorm
    // (a^p-a)%p==0 where a is any number and
    // p is any prime number
int mod_div(int a, int b, int m) {
    a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) ) % m;}  //only for prime m
signed main(){

    cout<<"hello world\n";
    cout << " how are you ";
    return 0;
}