#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[20];
	cin>>str;
	int c=0,n=strlen(str);
	if(n==1)
	cout<<"YES"<<endl;
	else
	{
	for(int i=0;i<n/2;i++)
		if(str[i]!=str[n-i-1])
			c++;
	if(c==1)
		cout<<"YES"<<endl;
	else{
	    if(n%2){
	    if(!c)
	    cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;}
	    else
		cout<<"NO"<<endl;
	}
	}
	return(0);
}