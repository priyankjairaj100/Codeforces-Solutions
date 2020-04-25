#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

pair<double, double> find_Centroid(vector<pair<double, double>> &v)
{
    pair<double, double> ans = {0, 0};

    int n = v.size();
    double signedArea = 0;

    // For all vertices
    for (int i = 0; i < v.size(); i++)
    {

        double x0 = v[i].first, y0 = v[i].second;
        double x1 = v[(i + 1) % n].first, y1 =
                                              v[(i + 1) % n].second;

        // Calculate value of A
        // using shoelace formula
        double A = (x0 * y1) - (x1 * y0);
        signedArea += A;

        // Calculating coordinates of
        // centroid of polygon
        ans.first += (x0 + x1) * A;
        ans.second += (y0 + y1) * A;
    }

    signedArea *= 0.5;
    ans.first = (ans.first) / (6 * signedArea);
    ans.second = (ans.second) / (6 * signedArea);

    return ans;
}


int32_t main(){
    jai_shree_ram
    int n;
    cin >> n;
    vector <pair<double, double>> polygon;
    rep(i,1,n,1){
        double xx, yy;
        cin >> xx >> yy;
        polygon.pb({xx, yy});
    }
    pair <double, double> cnt = find_Centroid(polygon);
    //cout << cnt.first << " " << cnt.second << endl;
    map <pair<double, double>, int> m;
    rep(i,0,n-1,1){
        polygon[i] = {polygon[i].first - cnt.first, polygon[i].second - cnt.second};
        m[polygon[i]]++;
    }

    for(auto dd: polygon){
        if(!m[{-dd.first, -dd.second}]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}