#include <bits/stdc++.h>
using namespace std;

//iterative much faster than recursive
int binexp(int base, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n % 2)
        {
            ans = ans * base;
            n = n - 1;
        }
        else
        {
            base = base * base;
            n = n >> 2;
        }
    }
    return ans;
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