#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i,size,max;
	printf("Enter your size: \n");
	scanf("%d",&size);
	printf("Enter your value: \n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("given value: \n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]=%d \n",i,a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("maximum value: %d",max);
	getch();
}
