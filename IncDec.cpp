#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << " ";
}

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    dec(n - 1);
}

int main()
{
    int n;
    cin >> n;

    inc(n);
    cout << "\n";
    dec(n);
}