#include <bits/stdc++.h>
using namespace std;
#define ll long long
int fib(int n)
{
    ll x = 1, y = 1;
    if (n == 0)
    {
        x = 0;
    }
    else if (n == 1)
    {
        x = 1;
    }
    else if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            x = x + y;
            y = x - y;
        }
    }

    return x;
}
int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}