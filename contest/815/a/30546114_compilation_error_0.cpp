#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
int const N = 111;
int g[N][N], r[N], c[N], e[N], f[N];
int main() {
int n, m; scanf(“%d%d”, &n, &m);
rep(i, n) rep(j, m) scanf(“%d”, &g[i][j]);
int ans = inf, q;
rep(t, g[0][0] + 1) {
r[0] = t, q = 0;
rep(j, m) c[j] = g[0][j] – t, q += c[j];
rep(i, n) r[i] = g[i][0] – c[0], q += r[i];
bool fail = 0;
rep(i, n) rep(j, m) if (r[i] < 0 || c[j] < 0 || g[i][j] != r[i] + c[j]) fail = 1;
if (fail) continue;
if (q < ans) {
ans = q;
rep(i, n) e[i] = r[i];
rep(j, m) f[j] = c[j];
}
}
if (ans != inf) {
printf(“%d\n”, ans);
rep(i, n) rep(j, e[i]) printf(“row %d\n”, i + 1);
rep(i, m) rep(j, f[i]) printf(“col %d\n”, i + 1);
} else puts(“-1”);
return 0;
}