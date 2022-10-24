#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    vector<vector<long long>> dp(n, vector<long long>(n));

    if (grid[0][0] == '.')
        dp[0][0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (grid[i][0] == '.')
            dp[i][0] = dp[i - 1][0];
        
        if (grid[0][i] == '.')
            dp[0][i] = dp[0][i - 1];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (grid[i][j] == '*')
                continue;
            
            if (grid[i][j - 1] == '.')
                dp[i][j] = (dp[i][j] % MOD + dp[i][j - 1] % MOD) % MOD;
            if (grid[i - 1][j] == '.')
                dp[i][j] = (dp[i][j] % MOD + dp[i - 1][j] % MOD) % MOD;
        }
    }

    cout << dp[n - 1][n - 1] << '\n';

    return 0;
}