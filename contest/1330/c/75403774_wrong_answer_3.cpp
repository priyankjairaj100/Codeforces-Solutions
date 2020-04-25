#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    jai_shree_ram 
    int n, m;
    cin >> n >> m;
    pii l[m+1];
    int sum = 0;
    rep(i,1,m,1){
        int x;
        cin >> x;
        sum += x;
        l[i] = {x, i};
    }
    sort(l+1,l+1+m, greater<pii>());

    int s[m+1];
    rep(i,1,m,1){
        s[i] = i+l[i].first -1;
    }
    if(s[m] > n){
        cout << -1 << endl;
        return 0;
    }
    
    if(sum < n){
        cout << -1 << endl;
        return 0;
    }

    s[m] = n;
    int b[m+1];
    rep(i,1,m,1) b[i] = i;
    b[m] = n - l[m].first + 1;

    brep(i,m-1,2,1){
        if(s[i] >= b[i+1]) break;
        s[i] = b[i+1]-1;
        b[i] = s[i] - l[i].first + 1;
    }

    int len[m+1];
    rep(i,1,m,1) len[l[i].second] = b[i];
    rep(i,1,m,1) cout << len[i] << " ";
    return 0; 
}