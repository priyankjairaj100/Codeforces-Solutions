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
    s= l+r+a;
    if ((s-1)%2==0)
        cout<<s-1<<el;
    else if(s%2==0){
        cout<<s-2<<el;
    }
	return(0);
}