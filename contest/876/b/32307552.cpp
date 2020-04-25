/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll b[100005];

ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k,m; cin>>n>>k>>m;
    ll a[n],temp,x=-1;
    for (int i = 0; i < n; ++i)
    {
      cin>>a[i];
      temp=modl(a[i],m);
      b[temp]++;
      if(b[temp]>=k)
        x=temp;
    }
    if(x==-1){
      cout<<"No"<<el;
      return 0;
    }
    else{
      cout<<"Yes"<<el;
      ll y=0;
      for (int i = 0; i < n && y<k; ++i)
      {
        if(modl(a[i],m)==x){
          cout<<a[i]<<" ";
          y++;
        }
      }
      cout<<el;
    }
	return(0);
}