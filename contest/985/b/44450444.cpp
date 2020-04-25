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
const int N = 2002;

int n, m;
bool L[N][N];
bool pre[N][N];
bool suf[N][N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    cin>>n>>m;

    string s;
    for(int i = 1; i <= n; i++) {
        cin>>s;

        for(int j = 0; j < m; j++) {
            L[i][j] = (s[j] == '0' ? 0 : 1);
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            pre[i][j] = pre[i - 1][j] | L[i][j];
            //cout<<pre[i][j]<<" ";
        }
        //cout<<"\n";
    }

    for(int i = n; i >= 1; i--) {
        for(int j = 0; j < m; j++) {
            suf[i][j] = suf[i + 1][j] | L[i][j];
            //cout<<suf[i][j]<<" ";
        }
        //cout<<"\n";
    }

    bool ok = 0;
    for(int i = 1; i <= n; i++) {
        bool same = 1;
        for(int j = 0; j < m; j++) {
            if((pre[i - 1][j] | suf[i + 1][j]) == 0) {
                same = 0;
                break;
            }
        }
        if(same) {
            ok = 1;
            break;
        }
    }

    cout<<(ok ? "YES" : "NO")<<"\n";
    return 0;
}
