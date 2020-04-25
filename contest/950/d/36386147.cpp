/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
#define for (i, n) for (ll i = 0; i < n; ++i)
#define dec(i, n) for (ll i = n; i > 0; --i)

ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    long long n, x;
    int Q;
    cin >> n >> Q;
    while (Q--)
    {
        cin >> x;
        while (x % 2 == 0)
            x = x / 2 + n;
        cout << (x + 1) / 2 << endl;
    }
    return 0;
}