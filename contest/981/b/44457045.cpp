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

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin>>n;

    map <int, int> A, B;

    for(int i = 0; i < n; i++) {
        int a, x;
        cin>>a>>x;
        A[a] = x;
    }

    int m;
    cin>>m;

    for(int j = 0; j < m ; j++) {
        int b, y;
        cin>>b>>y;
        B[b] = y;
    }

    set <int> S;

    for(auto i: A) {
        S.insert(i.f);
    }

    for(auto j: B) {
        S.insert(j.f);
    }

    LL tot = 0;
    for(int i: S) {
        bool a = A.find(i) != A.end();
        bool b = B.find(i) != B.end();

        if(a and b) {
            tot += max(A[i], B[i]);
        }
        else if(a) {
            tot += A[i];
        }
        else {
            tot += B[i];
        }
    }

    cout<<tot<<"\n";
    return 0;
}
