#include <bits/stdc++.h>
using namespace std;
int inf=-1e9;
int a,b,c,z[7],ans;
int f(int a1,int b1,int c1,int j){
	if(a1<0||b1<0||c1<0){
		return -1;
	}
	if(z[j]==0)a1--;
	if(z[j]==1)b1--;
	if(z[j]==2)c1--;
	
	return 1+f(a1,b1,c1,(j+1)%7);
}
int main() {
	cin>>a>>b>>c;
	int x=min(a/3,min(b/2,c/2));
	z[0]=z[3]=1;
	z[2]=z[1]=z[5]=0;
	z[4]=z[6]=2;
	a-=3*x;b-=2*x;c-=2*x;
	ans=7*x;
	int aaa=0;
	for(int i=0;i<=6;i++){
			aaa=max(aaa,f(a,b,c,(i+1)%7));
	}
	cout<<ans+aaa<<endl;
}