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
const int N = 2e5 + 5;

int A[N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    for(int i = 1; i <= n; i++) {
        cin>>A[i];
    }

    LL cnt = 0, left = 0;
    for(int i = 1; i <= n; i++) {
        if(i == n) {
            cnt += ceil((double) (A[i] + left) / k);
        }
        else {
            if(left) {
                if(A[i] + left < k) {
                    cnt += ceil((double) (A[i] + left) / k);
                    left = 0;
                }
                else {
                    cnt += (A[i] + left) / k;
                    left = (A[i] + left) - ((A[i] + left) / k) * k;
                }
            }
            else {
                cnt += (A[i] + left) / k;
                left = (A[i] + left) - ((A[i] + left) / k) * k;
            }
        }
    }

    cout<<cnt<<"\n";
    return 0;
}