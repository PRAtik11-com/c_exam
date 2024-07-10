#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3]={1,2,3};
	int sum,i;
	for(i=0;i<3;i++)
	{
		sum=arr[i]*arr[i];
		printf("Square of array%d=%d\n",arr[i],sum);
	}
	
	
	getch();
}
