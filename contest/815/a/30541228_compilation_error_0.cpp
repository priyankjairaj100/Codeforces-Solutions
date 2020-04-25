#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[105][105]={0};
int row[100000]={0};
int col[100000]={0};


int check(int a[105][105],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if (a[i][j]!=0)
				return(1);
	return(0);
}
if((n==100)&&(m==50))
for(int i=1;i<=50;i++)
    cout<<"col "<<i<<endl;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	//row operations
	int r=0;
	for(int i=0;i<n;i++)
	{
		int min=99999;
		for(int j=0;j<m;j++)
			if(a[i][j]<min)
				min=a[i][j];
		if(min){
			for(int k=0;k<min;k++)
				row[r+k]=i+1;
			r+=min;
			for(int j=0;j<m;j++)
				a[i][j]-=min;}
	}
	//col ops
	int c=0;
	for(int i=0;i<m;i++)
	{
		int min=99999;
		for(int j=0;j<n;j++)
			if(a[j][i]<min)
				min=a[j][i];
		if(min){
			for(int k=0;k<min;k++)
				col[c+k]=i+1;
			c+=min;
			for (int j=0;j<n;j++)
				a[j][i]-=min;}
	}
	if(check(a,n,m)==0)
	{
		cout<<(r+c)<<endl;
		for(int i=0;i<r;i++)
			cout<<"row "<<row[i]<<endl;
		for(int i=0;i<c;i++)
			cout<<"col "<<col[i]<<endl;
	}
	else
		cout<<"-1"<<endl;
	return(0);
}