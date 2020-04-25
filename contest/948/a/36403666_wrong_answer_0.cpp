/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
#define fr(i,n) for(ll i=0;i<n;++i)
bool myfn(int i, int j) { return i < j; }


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll r,c; cin>>r>>c;
    char a[r+2][c+2];
    ll n = r, m = c;
    fr(i,n+2)a[i][0]='.';
    fr(i, n + 2) a[i][m+1] = '.';
    fr(i, m + 2) a[0][i] = '.';
    fr(i, m + 2) a[n+1][i] = '.';
    ll f=0;
        for(ll i = 1; i<=n;++i)
        for(ll j=1;j<=m;++j)cin>>a[i][j];
    for(ll i = 1; i<=n;++i){
        for(ll j=1;j<=m;++j){
            if(a[i][j]=='W'){
                if(a[i-1][j]=='S' || a[i+1][j]=='S' || a[i][j-1]=='S' || a[i][j+1]=='S')
                    f=1;
                if(a[i-1][j]=='.')
                    a[i-1][j]='D';
                if (a[i + 1][j] == '.')
                    a[i + 1][j] = 'D';
                if (a[i][j-1] == '.')
                    a[i][j-1] = 'D';
                if (a[i][j+1] == '.')
                    a[i][j+1] = 'D';
            }
        }
    }
    if(f==1)
        cout<<"No"<<el;
    else{cout<<"Yes"<<el;
        for (ll i = 1; i <= n; ++i)
        {
            for (ll j = 1; j <= m; ++j)
            {cout<<a[i][j]<<" ";}cout<<el;
        }}

                return (0);
            }