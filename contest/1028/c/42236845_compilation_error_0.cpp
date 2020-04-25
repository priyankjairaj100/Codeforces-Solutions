/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
#define fr(i,n) for(ll i=0;i<n;++i)
#define fr1(i,n) for(ll i=1;i<=n;++i)
bool myfn(int i, int j) { return i < j; }

int check(int x, int y)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] <= x && x <= a[i][2] && a[i][1] <= y && y <= a[i][3])
            ans++;
    }
    return (ans >= n - 1);
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    int x = -2e9, y = -2e9, u = 2e9, v = 2e9;
    for (int i = 0; i < n; i++)
    {
        x = max(a[i][0], x);
        y = max(a[i][1], y);
        u = min(a[i][2], u);
        v = min(a[i][3], v);
    }
    if (check(x, y))
    {
        cout << x << " " << y << endl;
        exit(0);
    }
    if (check(u, y))
    {
        cout << u << " " << y << endl;
        exit(0);
    }
    if (check(x, v))
    {
        cout << x << " " << v << endl;
        exit(0);
    }
    if (check(u, v))
    {
        cout << u << " " << v << endl;
        exit(0);
    }
    return 0;
}