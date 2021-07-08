#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int firstOcc(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i;
    }

    return firstOcc(a, n, i + 1, key);
}

int lastOcc(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restarr = lastOcc(a, n, i + 1, key);
    if (restarr != -1)
    {
        return restarr;
    }
    if (a[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    int key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << firstOcc(a, n, 0, key) << endl;
    ;
    cout << lastOcc(a, n, 0, key) << endl;
    ;
}