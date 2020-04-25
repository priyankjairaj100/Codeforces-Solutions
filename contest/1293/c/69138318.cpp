#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
////////////////////////////////

int m[2][MAX];

int eq(pii x, pii y){
    if(x.first == y.first and x.second == y.second) return 1;
    return 0;
}

int32_t main(){
    fastio
    int n, q;
    cin >> n >> q;
    int n11 = 0, nb = 0;

    rep(i,1,q,1){
        int r, c;
        cin >> r >> c;
        pii xy, xy1;
        r--;
        if(r == 0){
            xy1 = {!m[0][c],m[1][c]};
            xy = {m[0][c], m[1][c]};
        }
        else{
            xy1 = {m[0][c], !m[1][c]};
            xy = {m[0][c], m[1][c]};
        }
        
        if(eq(xy, {1,1})){
            n11--;
            if(eq(xy1,{1, 0})){
                if(m[0][c+1] == 1 and m[1][c+1] == 0) nb--;
                if(m[0][c-1] == 1 and m[1][c-1] == 0) nb--;    
            }
            else{
                if(m[0][c+1] == 0 and m[1][c+1] == 1) nb--;
                if(m[0][c-1] == 0 and m[1][c-1] == 1) nb--;
            }
        }
        
        if(eq(xy1, {1,1})) {
            n11++;
            if(eq(xy,{1, 0})){
                if(m[0][c+1] == 1 and m[1][c+1] == 0) nb++;
                if(m[0][c-1] == 1 and m[1][c-1] == 0) nb++;    
            }
            else{
                if(m[0][c+1] == 0 and m[1][c+1] == 1) nb++;
                if(m[0][c-1] == 0 and m[1][c-1] == 1) nb++;
            }
        }

        if(eq(xy,{0,1}) and eq(xy1,{0,0})){
            if(m[0][c+1] == 1 and m[1][c+1] == 0) nb--;
            if(m[0][c-1] == 1 and m[1][c-1] == 0) nb--;
            if(m[0][c+1] == 1 and m[1][c+1] == 1) nb--;
            if(m[0][c-1] == 1 and m[1][c-1] == 1) nb--;
        }
        if(eq(xy,{1,0}) and eq(xy1,{0,0})){
            if(m[0][c+1] == 0 and m[1][c+1] == 1) nb--;
            if(m[0][c-1] == 0 and m[1][c-1] == 1) nb--;
            if(m[0][c+1] == 1 and m[1][c+1] == 1) nb--;
            if(m[0][c-1] == 1 and m[1][c-1] == 1) nb--;
        }
        if(eq(xy, {0,0}) and eq(xy1, {0,1})){
            if(m[0][c+1] == 1 and m[1][c+1] == 0) nb++;
            if(m[0][c-1] == 1 and m[1][c-1] == 0) nb++;
            if(m[0][c+1] == 1 and m[1][c+1] == 1) nb++;
            if(m[0][c-1] == 1 and m[1][c-1] == 1) nb++;
        }

        if(eq(xy, {0,0}) and eq(xy1,{1,0})){
            if(m[0][c+1] == 0 and m[1][c+1] == 1) nb++;
            if(m[0][c-1] == 0 and m[1][c-1] == 1) nb++;
            if(m[0][c+1] == 1 and m[1][c+1] == 1) nb++;
            if(m[0][c-1] == 1 and m[1][c-1] == 1) nb++;
        }

        if(n11 or nb){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;

        m[r][c] = !m[r][c];
    }
    return 0;
}