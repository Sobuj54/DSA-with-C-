#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, sum = 0;
    cin >> n;
    vector<int> counts(n);

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
        counts[i] = sum;
    }

    int ind = 0;
    vector<int> worms(sum + 1);

    for (int i = 1; i <= sum; i++)
    {
        if (i > counts[ind])
            ind++;
        worms[i] = ind + 1;
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << worms[t] << endl;
    }

    return 0;
}