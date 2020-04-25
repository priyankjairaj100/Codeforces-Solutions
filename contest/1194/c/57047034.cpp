//I will become the king of pirates.. no wait
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define int long long
typedef long double LD;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>

string s, t, p;

bool isSubSequence(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return isSubSequence(str1, str2, m, n-1); 
}

int32_t main()
{
    fastio
    int q; cin >> q;
    while(q--){
        cin>>s>>t>>p;
        int a = s.length(), b = t.length(), c = p.length();
        if(s == t){cout<<"YES"<<endl; continue;}
        if((a == b and t!= p)  or a>b){cout<<"NO"<<endl; continue;}
        if(!isSubSequence(s,t,a,b)){cout<<"NO"<<endl; continue;} 
        multiset <char> ss, st, sp;
        rep(i,0,a-1,1) ss.insert(s[i]);
        rep(i,0,b-1,1) st.insert(t[i]);
        rep(i,0,c-1,1) sp.insert(p[i]);
        for(auto z: ss){
            auto zf = st.find(z);
            st.erase(zf);
        }
        string zt = "", zp = "";
        for(auto z: st) zt += z;
        for(auto z: sp) zp += z;
        a = zt.length(); b = zp.length();
        //cout << zt << " " << zp <<endl;
        if(isSubSequence(zt, zp, a, b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}