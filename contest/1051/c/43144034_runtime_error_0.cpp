/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

/***********************************************
*   TEMPLATE AUTHOR:         BHUVNESH JAIN     *
*    INSTITUITION:   BITS PILANI, PILANI       *
************************************************/

// https://github.com/likecs/Competitive-Programming-Setup/blob/master/code_template.cpp //

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;


#define fr(i,n) for(LL i = 0; i<n ; ++i)
#define fr1(i,n) for(LL i = 1; i<=n ; ++i)

LL c[105];
char m[105];
vector<LL> x[1005];
LL h = 1;
int main() {
    LL n; cin>>n; 
    LL a[n+1]; fr1(i,n){cin>>a[i]; c[a[i]]++; x[a[i]].push_back(i);}
    LL ng = 0; fr1(i, 100) if(c[i]%2!=0) ng++;
    if(ng%2!=0){cout<<"NO"<<endl; return 0;}
    cout<<"YES"<<endl;
    fr1(i,100){
      if(c[i] && c[i]%2==0){
        for(auto j : x[i]){
            m[j] = 'A' + (h = !h);
         // cout<<i<<" "<<j<<" "<<m[j]<<endl;
        }
      }
    }
    h = 1;
    fr1(i,100){
      if(c[i] && c[i]%2==1){
        for(auto j:x[i]){
        m[j] = 'A' + (h = !h);
        }
      }
    }
    fr1(i,100){
      if(c[a[i]]) cout<<m[i]; 
    }
    cout<<endl;
	return 0;
}