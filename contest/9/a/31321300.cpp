#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b; cin>>a>>b;
	int x=7-max(a,b);
	if(x==0)
		cout<<"0/1"<<endl;
	else if(x==1)
		cout<<"1/6"<<endl;
	else if(x==2)
		cout<<"1/3"<<endl;
	else if(x==3)
		cout<<"1/2"<<endl;
	else if(x==4)
		cout<<"2/3"<<endl;
	else if(x==5)
		cout<<"5/6"<<endl;
	else
		cout<<"1/1"<<endl;
	return(0);
}