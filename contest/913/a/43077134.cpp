#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()

using LL   =  long long;
using pii  =  pair <int, int>;
using vii  =  vector <pii>;

const int INF = INT_MAX;
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int main()
{
    //ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    cin>>n>>m;

    if(n > 30) {
        cout<<m<<"\n";
    }
    else {
        int res = m % (1<<n);
        cout<<res<<"\n";
    }

    return 0;
}
