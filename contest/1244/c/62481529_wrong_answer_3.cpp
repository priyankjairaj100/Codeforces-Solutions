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

int gcd(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b%a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

int32_t main(){
    fastio
    int n, p, w, d;
    cin >> n >> p >> w>> d;
    int a = w;
    int b = d;
    int c = p;
    int x = -1, y = -1, g = -1; 
    if(!find_any_solution(a,b,c,x,y,g)){
        cout << -1;
        return 0;
    }
    int fx = (d/g), fy = (w/g);
   //cout << x << " " << fx << " " << y << " " << fy << endl;
    rep(i,-MAX,MAX,1){
        int x1 = x + fx * i;
        int y1 = y - fy * i;
        if(x1 >= 0 and x1 <= n and y1 >= 0 and y1 <= n and x1 + y1 <= n){
            cout << x1 << " " << y1 << " "<< (n - x1 - y1) <<endl;
            return 0;
        }
    }
    cout <<"-1";
    return 0;   
}