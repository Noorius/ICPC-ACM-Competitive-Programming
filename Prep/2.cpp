#include <iostream>
#include <vector>
using namespace std;

int n, m, a, x, y;
int cost[10001];
pair<int, int> p;
vector<pair<int, int>> g[10001];

int dfs(int v, int minn) {
  for(auto u : g[v]) {
    minn = min(minn, dfs(u.first, cost[u.first]) + dfs(u.second, cost[u.second]));
  }
  return minn;
}

int main() {
//   freopen("dwarf.in", "r", stdin);
//   freopen("dwarf.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  for(int i = 1; i <= n; i++) cin >> cost[i];
  for(int _ = 0; _ < m; _++) {
    cin >> a >> x >> y;
    p = make_pair(x, y);
    g[a].push_back(p);
  }
  cout << dfs(1, cost[1]);
  return 0;
}
