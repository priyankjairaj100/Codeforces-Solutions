#include <stdio.h>
int main()
{
	int n,m,k,l;scanf("%d %d",&n,&m);
	int a[n][m],b[n][m],i,j,min;

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=0;
		}
		if((m==1)&&(n==1))
	{
		printf("0\n");
		return(0);
	}
		int f=0,count=0;


	for(i=0;((i<n)&&(f==0));i++)
	{
		min=999999;
		f=0;
		for(j=0;j<m;j++)
			if(a[i][j]<min)
				min=a[i][j];
		if(min)
		{
			count+=min;
			for(j=0;j<m;j++)
				b[i][j]+=min;
			for(k=0;k<n;k++)
				for(l=0;((l<m)&&(f==0));l++)
					if(a[k][l]!=b[k][l])
						f=1;
			f=(f==1)?0:1;
		}
	}
	for(i=0;((i<m)&&(f==0));i++)
	{
		min=999999;
		f=0;
		for(j=0;j<n;j++)
			if(a[j][i]<min)
				min=a[j][i];
		if(min)
		{
			count+=min;
			for(j=0;j<n;j++)
				b[j][i]+=min;
			for(k=0;k<n;k++)
				for(l=0;((l<m)&&(f==0));l++)
					if(a[k][l]!=b[k][l])
						f=1;
			f=(f==1)?0:1;
		}
	}
	if(count)
		printf("%d\n",count);

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[i][j]=0;
	f=0;
	for(i=0;((i<n)&&(f==0));i++)
	{
		min=999999;
		f=0;
		for(j=0;j<m;j++)
			if(a[i][j]<min)
				min=a[i][j];
		if(min)
		{
			for(j=0;j<min;j++)
				printf("row %d\n",i+1);
			for(j=0;j<m;j++)
				b[i][j]+=min;
			for(k=0;k<n;k++)
				for(l=0;((l<m)&&(f==0));l++)
					if(a[k][l]!=b[k][l])
						f=1;
			f=(f==1)?0:1;
		}
	}
	for(i=0;((i<m)&&(f==0));i++)
	{
		min=999999;
		f=0;
		for(j=0;j<n;j++)
			if(a[j][i]<min)
				min=a[j][i];
		if(min)
		{
			for(j=0;j<min;j++)
				printf("col %d\n",i+1);
			for(j=0;j<n;j++)
				b[j][i]+=min;
			for(k=0;k<n;k++)
				for(l=0;((l<m)&&(f==0));l++)
					if(a[k][l]!=b[k][l])
						f=1;
			f=(f==1)?0:1;
		}
	}
	if(f==0)
		printf("-1\n");
	return(0);
}