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
const int N = 4e5 + 5;

struct data {
    bool a, b;
    int pts;
};

vector <data> A, both, onlyA, onlyB, none;

bool comp(const data &aa, const data &bb) {
    return aa.pts > bb.pts;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin>>n;

    string s;
    A.resize(n);

    for(int i = 0; i < n; i++) {
        cin>>s>>A[i].pts;
        A[i].a = (s[0] == '0' ? false : true);
        A[i].b = (s[1] == '0' ? false : true);
        if(A[i].a and A[i].b) {
            both.pb(A[i]);
        }
        else if(A[i].a and !A[i].b) {
            onlyA.pb(A[i]);
        }
        else if(!A[i].a and A[i].b) {
            onlyB.pb(A[i]);
        }
        else {
            none.pb(A[i]);
        }
    }

    if(both.empty() and (onlyA.empty() or onlyB.empty())) {
        cout<<"0\n";
        return 0;
    }

    sort(all(both), comp);
    sort(all(onlyA), comp);
    sort(all(onlyB), comp);
    sort(all(none), comp);

    LL ans = 0, cntA = 0, cntB = 0, tot = 0;
    for(auto i: both) {
        ans += i.pts;
        cntA++, cntB++, tot++;
    }

    for(int i = 0; i < min(onlyA.size(), onlyB.size()); i++) {
        ans += onlyA[i].pts, cntA++, tot++;
        ans += onlyB[i].pts, cntB++, tot++;
    }

    vector <data> tmp;
    if(onlyA.size() < onlyB.size()) {
        /// B left
        for(int i = min(onlyA.size(), onlyB.size()); i < onlyB.size(); i++) {
            tmp.pb(onlyB[i]);
        }
    }
    else {
        /// A left
        for(int i = min(onlyA.size(), onlyB.size()); i < onlyA.size(); i++) {
            tmp.pb(onlyA[i]);
        }
    }

    for(int i = 0; i < none.size(); i++) {
        tmp.pb(none[i]);
    }

    sort(all(tmp), comp);

    for(int i = 0; i < tmp.size(); i++) {
        if(tmp[i].a) {
            if(2 * (cntA + 1) >= tot + 1 and 2 * (cntB) >= tot + 1) {
                ans += tmp[i].pts, cntA++, tot++;
            }
        }
        else if(tmp[i].b) {
            if(2 * (cntA) >= tot + 1 and 2 * (cntB + 1) >= tot + 1) {
                ans += tmp[i].pts, cntB++, tot++;
            }
        }
        else {
            if(2 * (cntA) >= tot + 1 and 2 * (cntB) >= tot + 1) {
                ans += tmp[i].pts, tot++;
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}