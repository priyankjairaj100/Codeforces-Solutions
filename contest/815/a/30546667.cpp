#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[105][105]={0};
int ar[105][105]={0};
int ac[105][105]={0};
int rowr[100000]={0};
int colr[100000]={0};
int rowc[100000]={0};
int colc[100000]={0};
int rr=0;
int cr=0;
int rc=0;
int cc=0;


int check(int b[105][105],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if (b[i][j]!=0)
				return(1);
	return(0);
}
int solver(int ar[105][105],int n,int m)
{
	//row operations
	for(int i=0;i<n;i++)
	{
		int min=99999;
		for(int j=0;j<m;j++)
			if(ar[i][j]<min)
				min=ar[i][j];
		if(min){
			for(int k=0;k<min;k++)
				rowr[rr+k]=i+1;
			rr+=min;
			for(int j=0;j<m;j++)
				ar[i][j]-=min;}
	}
	//col ops
	for(int i=0;i<m;i++)
	{
		int min=99999;
		for(int j=0;j<n;j++)
			if(ar[j][i]<min)
				min=ar[j][i];
		if(min){
			for(int k=0;k<min;k++)
				colr[cr+k]=i+1;
			cr+=min;
			for (int j=0;j<n;j++)
				ar[j][i]-=min;}
	}
	return(rr+cr);
}
int solver1(int ac[105][105],int n,int m)
{
		//col ops
	for(int i=0;i<m;i++)
	{
		int min=99999;
		for(int j=0;j<n;j++)
			if(ac[j][i]<min)
				min=ac[j][i];
		if(min){
			for(int k=0;k<min;k++)
				colc[cc+k]=i+1;
			cc+=min;
			for (int j=0;j<n;j++)
				ac[j][i]-=min;}
	}
	//row operations
	for(int i=0;i<n;i++)
	{
		int min=99999;
		for(int j=0;j<m;j++)
			if(ac[i][j]<min)
				min=ac[i][j];
		if(min)
		{
			for(int k=0;k<min;k++)
				rowc[rc+k]=i+1;
			rc+=min;
			for(int j=0;j<m;j++)
				ac[i][j]-=min;
		}
	}
	return(rc+cc);
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			ar[i][j]=a[i][j];
			ac[i][j]=a[i][j];
		}
	if(solver(ar,n,m)<solver1(ac,n,m)){
	if(check(ar,n,m)==0)
	{
		cout<<(rr+cr)<<endl;
		for(int i=0;i<rr;i++)
			cout<<"row "<<rowr[i]<<endl;
		for(int i=0;i<cr;i++)
			cout<<"col "<<colr[i]<<endl;
	}
	else
		cout<<"-1"<<endl;}
	else
	{
	if(check(ac,n,m)==0)
	{
		cout<<(rc+cc)<<endl;
		
		for(int i=0;i<rc;i++)
			cout<<"row "<<rowc[i]<<endl;
		for(int i=0;i<cc;i++)
			cout<<"col "<<colc[i]<<endl;
	}
	else
		cout<<"-1"<<endl;
	}
	return(0);
}