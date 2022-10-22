#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> tp;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        tp.insert(num);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> num;

        if (tp.empty())
        {
            cout << -1 << '\n';
            continue;
        }

        auto it = tp.lower_bound(num);
        
        if (it == tp.end())
        {
            it--;
            cout << (*it) << '\n';
        }
        else if ((*it) == num)
            cout << num << '\n';
        else if ((*it) > num && it != tp.begin())
        {
            it--;
            cout << (*it) << '\n';
        }
        else
        {
            cout << -1 << '\n';
            continue;
        }

        tp.erase(it);
    }

    return 0;
}