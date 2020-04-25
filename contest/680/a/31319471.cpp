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
	int m=0,k=0;
	for (int i = 0; i < 5; ++i)
	{

		if(b[a[i]]==2)
			m=a[i]*2;
		else if(b[a[i]]>2)
			m=a[i]*3;
		k= (m>k)?m:k;
	}
	cout<<sum-k<<endl;
	return(0);
}