#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int dp[51];
    dp[1] = 1;

    vector<int> ans(n + 1, 0);
    ans[0] = 0;
    ans[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        int t = (i - 1) + 1 + dp[i - 1];
        dp[i] = t;
        ans[t] = i;
    }
    if (ans[n] == 0)
    {
        while (ans[n] == 0)
        {
            n--;
        }
    }
    cout << ans[n];

    return 0;
}