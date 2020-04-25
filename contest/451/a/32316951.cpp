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
    ll n,m; cin>>n>>m;
    ll x=min(m,n);(x%2)?cout<<"Akshat"<<el:cout<<"Malvika"<<el;
	return(0);
}