#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    map<int, vector<int>> inum;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        inum[nums[i]].push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        auto it = inum.find(x - nums[i]);
        if (it != inum.end())
        {
            if ((*it).second[0] != i)
            {
                cout << i + 1 << ' ' << (*it).second[0] + 1<< '\n';
                return 0;
            }
            else if ((*it).second.size() != 1)
            {
                cout << i + 1 << ' ' << (*it).second[1] + 1<< '\n';
                return 0;
            }
        }
    }
    
    cout << "IMPOSSIBLE\n";

    return 0;
}