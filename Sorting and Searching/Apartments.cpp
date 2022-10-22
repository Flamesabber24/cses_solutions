#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> pias(n);
    for (int i = 0; i < n; i++)
        cin >> pias[i];

    vector<int> aas(m);
    for (int i = 0; i < m; i++)
        cin >> aas[i];

    sort(pias.begin(), pias.end());
    sort(aas.begin(), aas.end());

    int i = 0;
    int j = 0;

    int cnt = 0;
    while (i < n && j < m)
    {
        if (abs(pias[i] - aas[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (pias[i] > aas[j])
            j++;
        else if (pias[i] < aas[j])
            i++;
    }

    cout << cnt << '\n';

    return 0;
}