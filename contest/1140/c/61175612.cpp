//Gear Third
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
//auto cmp = [](int a, int b) {return a > b ;};
//set<int, decltype(cmp)> s(cmp);
/*__________________________________________*/

bool cmp(pii a, pii b){
    if(a.first == b.first) return a.second >= b.second;
    return a.first > b.first;
}

int32_t main(){
    fastio
    int n, k; cin >> n >> k;
    pii b[n+1];
    rep(i,1,n,1){
        cin >> b[i].second;
        cin >> b[i].first;
    }
    sort(b+1,b+1+n, cmp);
    int ans = 0, sum = 0;
    multiset <int> s;
    int fa = 0;

    rep(i,1,n,1){
        int l = b[i].second;
        int bb = b[i].first;
        if(s.size() == k){
            auto itr = s.begin();
            sum -= *itr;
            s.erase(itr);
        }
        s.insert(l);
        sum += l;
        ans = sum * bb;
        fa = max(fa, ans);
    }

    cout << fa << endl;
    return 0;
}
