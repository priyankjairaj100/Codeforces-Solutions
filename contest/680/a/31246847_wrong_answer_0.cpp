#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5]={0},b[105]={0},sum=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		b[a[i]]++;
		sum+=a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(b[a[i]]==2){
			sum-=b[a[i]]*a[i];
			b[a[i]]=0;
		}
		if(b[a[i]]>2){
			sum-=3*a[i];
			b[a[i]]=0;
		}
	}
	cout<<sum<<endl;
	return(0);
}