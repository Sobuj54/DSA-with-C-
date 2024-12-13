#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i < n; i++)
            cin >> b[i];

        b[0] = b[n] = 0;
        for (int i = 1; i <= n; i++)
            a[i] = b[i - 1] | b[i];

        bool valid = true;
        for (int i = 1; i < n; i++)
        {
            if ((a[i] & a[i + 1]) != b[i])
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            for (int i = 1; i <= n; i++)
                cout << a[i] << ' ';
            cout << '\n';
        }
        else
            cout << -1 << endl;
    }
    return 0;
}