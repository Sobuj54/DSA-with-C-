#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll sum = a + b;
        if (sum % 2 == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}