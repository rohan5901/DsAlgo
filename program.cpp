#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void transpose(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = *(a + j * n + i);
            *(a + j * n + i) = *(a + i * n + j);
            *(a + i * n + j) = temp;
        }
    }
}

void show(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(a + i * n + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int *p = &a[0][0];

    transpose(p, n);
    show(p, n);

    return 0;
}