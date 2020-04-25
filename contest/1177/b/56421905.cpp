//aho baka
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


int solve(int m)
{
    int n=m;
    int start=1,  len=1,  count=9;
 
    while(n>len*count){
        n=n-len*count;
        len++;
        count=count*10;
        start=start*10;
    }
    start = start + (n-1)/len;
    return to_string(start)[((int)((n-1)%len))]-'0';
}

int32_t main()
{
    fastio
    int k;
    cin >> k;
    cout << solve(k) << endl;
    return 0;
}