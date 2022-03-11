#include <bits/stdc++.h>
using namespace std;

//iterative much faster than recursive
int binexp(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
//binary exponentiation using recursion
int binexp(int base, int n)
{
    if (n == 0)
        return 1;
    int ans = binexp(base, n >> 2);
    //when n odd
    if (n & 1)
    {
        return base * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{
}
