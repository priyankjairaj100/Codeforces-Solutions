    //I will become the king of pirates.. no wait
    #include <bits/stdc++.h>
    #include <string>
    using namespace std;

    #define int long long
    typedef long double LD;

    const int MAX = 1e5 + 5;
    const int MOD = 1e9 + 7;
    const LD EPS = 1e-10;
    const LD PI = acos(-1.0);
    #define fastio                        \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);
    #define rep(i, a, b, d) for (int i = a; i <= b; i += d)
    #define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
    #define pb push_back
    #define pii pair<int, int>

    int a[100005][3], dp[100005][3];

    int32_t main()
    {
        int n; cin>>n;
        rep(i,1,n,1) cin >> a[i][0];
        rep(i,1,n,1) cin >> a[i][1];
        dp[1][0] = a[1][0], dp[1][1] = a[1][1];
        rep(i,2,n,1){
            rep(j,0,1,1){
                dp[i][j] = a[i][j] + max(dp[i-1][!j], dp[i-2][!j]);
            }
        }
        cout << max(dp[n][1], dp[n][0]) <<endl;
        return 0;
    }