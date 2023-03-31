#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0;
        while (a[i] >= a[i + 1])
        {
            i++;
        }
        int j = n - 1;
        while (a[j - 1] <= a[j])
        {
            j--;
        }
        if (i >= j)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}