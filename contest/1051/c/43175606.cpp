#include <bits/stdc++.h>
using namespace std;
typedef long long LL; 

#define fr1(i,n) for(LL i = 1; i<=n ; ++i)
LL c[105];
char m[105];
vector<LL> x[1005];
LL h = 1;
int main() {
    LL n; cin>>n; 
    LL a[n+1]; fr1(i,n){cin>>a[i]; c[a[i]]++; x[a[i]].push_back(i);}
    LL n1=0, n2=0, n3=0;
    fr1(i,100) if(c[i]){ if(c[i]==1)n1++; else if(c[i]==2)n2++; else n3++; }
    if(!n3 && n1%2) { cout<<"NO"<<endl; return 0;}
    cout<<"YES"<<endl;
    fr1(i,100) if(c[i] == 1) for(auto j: x[i]) m[j] = 'A' + (h=!h); LL k = 0;
    if(n1%2) fr1(i,100) if(c[i] >= 3) {for(auto j: x[i]){ if(k == 0) {m[j] = 'B'; k = 1;} else m[j] = 'A'; } break;}
    fr1(i,n) if(m[i]!='B') m[i] = 'A';
    fr1(i,n) cout<<m[i]; cout<<endl;
	return 0;
}