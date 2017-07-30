#include<stdio.h>
int main()
{
	int arr[25],i,n;
	for(i=0;i<=24;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter any no. =",n);
	scanf("%d",&n);
	if(n==arr[i])
	printf("no. is present in the array\n");
	else
	printf("no. is not present in the array\n");
	return 0;
}
