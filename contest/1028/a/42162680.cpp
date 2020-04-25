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
#define fr1(i,n) for(ll i=1;i<=n;++i)
bool myfn(int i, int j) { return i < j; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    char a[120][120];
    ll n,m; 
    cin>>n>>m;
    ll x = 0, b = 0;
    fr1(i,n) fr1(j,m) cin>>a[i][j];
    fr1(i,n) fr1(j,m){
        if(a[i][j] == 'B'){
            ll temp = j;
            while(a[i][j] == 'B'){
                j++;
            }
            x = (j+temp - 1)/2;
            break;
        }
    }
    fr1(i,m) fr1(j,n){
        if(a[j][i] == 'B'){
            ll temp = j;
            while(a[j][i] == 'B'){
                j++;
            }
            b = (j+temp - 1)/2;
            break;
        }
    }
    cout<<b<<" "<<x<<endl;
    return(0);
}