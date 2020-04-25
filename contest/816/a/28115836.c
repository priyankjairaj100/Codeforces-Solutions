#include <stdio.h>
int main()
{
	int hr,min;
	scanf("%d:%d",&hr,&min);
	int h1,h2,m1,m2,hf,mf,f=0;
	h1=hr/10; h2=hr%10;
	if(h2*10+h1==min)
			printf("0\n");
	else if(h1==0)
	{
		if((hr==5)&&(min<50))
				printf("%d\n",50-min);
		else if(h2<5)
		{
			if(min>h2*10+h1)
				printf("%d\n",60-min+(h2+1)*10);
			else
				printf("%d\n",h2*10+h1-min);
		}
		else
		{
			printf("%d\n",60-min+(10-(hr+1))*60+1);
		}
	}
	else if(hr==23)
	{
		if(min<=32)
			printf("%d\n",32-min);
		else
			printf("%d\n",60-min);
	}
	else if(((hr>14)&&(hr<20))||(hr==15)&&(hr>51))
		printf("%d\n",60-min+(20-(hr+1))*60+2);
	else
	{
		
	 if(h2*10+h1>min)
			printf("%d\n",h2*10+h1-min);
		else
			printf("%d\n",60-min+h2*10+h1+10);
	}
	return(0);
}