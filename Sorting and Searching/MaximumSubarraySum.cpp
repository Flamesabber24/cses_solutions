#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    long long best = x[0];
    long long mx_sum = x[0];

    for (int i = 1; i < n; i++)
    {
        mx_sum = max(mx_sum + x[i], x[i]);
        best = max(best, mx_sum);
    }

    cout << best << '\n';

    return 0;
}