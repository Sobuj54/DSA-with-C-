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
        vector<vector<int>> v(n, vector<int>(n - 1));
        vector<int> p(n, 0);
        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            p[i] = i + 1;
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
                if (j == 0)
                    cnt[v[i][j]]++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
            {
                p[0] = i;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i][0] != p[0])
            {
                for (int j = 0; j < n - 1; j++)
                {
                    p[j + 1] = v[i][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << p[i] << ' ';
        cout << endl;
    }
    return 0;
}