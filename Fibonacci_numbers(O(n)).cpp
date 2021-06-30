#include<bits/stdc++.h>
using namespace std;
//recursive function but not effective
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
//use dp
int fib(int n){
    vector<int> fibo(n + 2);
    fibo[0] = 0, fibo[1] = 1;
    int i = 2;
    while(i<=n){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        i++;
    }
    return fibo[n];
}
int fib(int n){
    int a = 0, b = 1, c,i=2;
    if(n==0)
        return a;
    while(i<=n){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main(){

}
