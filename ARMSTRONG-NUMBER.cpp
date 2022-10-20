#include <iostream>
using namespace std;
int main()
{
    int r, n, m, sum = 0;
    cout << "Enter n ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }
    if (sum == m)
    {
        cout << m << " is a armstrong number";
    }
    else
    {
        cout << m << " is not armstrong number";
    }

    return 0;
}