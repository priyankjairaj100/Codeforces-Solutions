#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n; int temp,x[5]={-1,0,0,0,0};
	for(int i=0;i<n;i++){
		cin>>temp;
		x[temp]++;
	}
	int c=0;
	c+=x[4]+x[3];
	x[1]-=((x[3]>=x[1]))?x[1]:x[3];
	c+=(x[2]%2==0)?(x[2]/2):(x[2]/2 + x[2]%2);
	x[1]-=(x[2]%2==0)?(0):(x[1]>1)?2:(x[1]>0)?1:0;
	c+=((x[1]>0)&&(x[1]<4))?(1):(x[1]/4 + (x[1]%4==0)?0:1);
	cout<<c<<endl;
	return(0);
}