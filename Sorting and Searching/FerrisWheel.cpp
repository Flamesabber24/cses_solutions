#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p.begin(), p.end());

    int i = 0;
    int j = n - 1;

    int cnt = 0;
    while (i <= j)
    {
        if (i != j && p[i] + p[j] <= x)
        {
            i++;
            j--;
        }
        else
            j--;

        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}