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
#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
const int a_size = 1e4 + 5;
////////////////////////////////

int n, d;
int BIT1[100005], BIT2[100005];

update1(int x, int del){
    for(; x <= 100004; x+= (x&(-x))) BIT1[x] += del;
    x = n-x+1;
    for(; x <= 100004; x-= (x&(-x))) BIT2[x] = max(BIT2[x], BIT1[n-x+1]);
}

int query1(int x){
    int ret = 0;
    for(; x > 0; x -= (x&(-x))) ret += BIT1[x];
    return ret;
}



int query2(int x){
    int ret = -MOD;
    for(; x > 0; x -= (x&(-x))) ret = max(ret, BIT2[x]);
    return ret;
}


int32_t main(){
    jai_shree_ram
    cin >> n >> d;
    int a[n+1];
    rep(i,1,n,1){
        cin >> a[i];
        update1(i, a[i]);
    }
    rep(i,0,100004,1) BIT2[i] = -MOD;
    //rep(i,1,n,1) update2(n-i+1, query1(i));
    int flag = 0, ans = 0;
    rep(i,1,n,1){
        if(!a[i] and query1(i) < 0){

            ans++;
            int mfh = query2(n-i+1);
            if(mfh > d){
                flag = 1;
                break;
            }
            int room = d - mfh;
            if(room + query1(i) < 0){
                flag = 2;
                break;
            }
 
            update1(i, room);
            //update2(n-i+1, query1(i));
        }
        if(query2(n-i+1) > d){
            flag = 3;
            break;
        }
    }
    if(flag) cout << -1 << endl;
    else cout << ans << endl;
    return 0; 
}