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
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                cnt += 2;
            }
            else
            {
                break;
            }
        }

        cout << n - cnt << "\n";
    }
    return 0;
}