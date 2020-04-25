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
    ll n; cin>>n; ll a[n],b[n-1];
    fr(i,n)cin>>a[i];
    fr(i,n-1)b[i]=abs(a[i]-a[i+1]);
    ll m = *max_element(b,b+n-1);
    ll z = *min_element(b,b+n-1);
    ll q = *max_element(a,a+n);
    if(m==0 || z ==0)
        cout<<"NO"<<el;
    else{
        ll x = (q%m==0)?q/m:(q/m)+1, y = m;
        ll ar[x+2][y+2]; ll k =1;
        for(ll i =1;i<=x;i++)
            for(ll j=1;j<=y;j++){
                ar[i][j]=k;k++;
            }
        fr(i,x+2)ar[i][0]=0;
        fr(i, x + 2) ar[i][y+1] = 0;
        fr(i, y + 2) ar[0][i] = 0;
        fr(i, y + 2) ar[x+1][i] = 0;

      //  for (ll i = 0; i <= x+1; i++){
        //    for (ll j = 0; j <= y+1; j++){cout<<a[i][j];}cout<<el;}
        //cout<<x<<y;
    ll fx=(a[0]-1)/y +1; ll fy = a[0] - (fx-1)*y;

    
    for(ll i = 1;i<n;++i){
        //ll l,r,u,d;
        if(a[i]==ar[fx][fy-1])
            fy--;
        else if (a[i] == ar[fx][fy + 1])
            fy++;
        else if (a[i] == ar[fx-1][fy])
            fx--;
        else if (a[i] == ar[fx+1][fy])
            fx++;
        else{
            cout<<"NO"<<el;
            return(0);
        }
  
    }
    cout << "YES" << el << x << " " << y << el;
    }
	return(0);
}