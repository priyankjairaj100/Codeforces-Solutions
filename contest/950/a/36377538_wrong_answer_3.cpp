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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll l,r,a,s; cin>>l>>r>>a;
    s = l+r+a;
    ll l1,r1;
    while(a>1 && l != r){
        l1 = min(l,r); r1 = max(l,r);
        l1 += min(a,(r1-l1));
        a -= min(a,(r1-l1));
        l = l1; r = r1;
    }
    cout<<min(l,r)*2+(a/2)*2<<el;
	return(0);
}