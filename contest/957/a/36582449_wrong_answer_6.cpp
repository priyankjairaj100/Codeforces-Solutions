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
    ll n; cin>>n;
    char str[n]; cin>>str;
        fr(i,n-1){if(str[i]==str[i+1] && str[i]!='?'){cout<<"No"<<el;return(0);}}
        ll x,y;
        fr(i,n){if(str[i]=='?')y++;}
        fr(i,n-1){
            if(i>0){
                if(str[i]=='?' && str[i-1]!='?' && str[i+1]!='?'){
                    if(str[i-1]!=str[i+1]){
                        x++;
                    }
                }
            }
        }
        if(y==x){cout<<"No"<<el; return(0);}
        cout<<"Yes"<<el;
	return(0);
}