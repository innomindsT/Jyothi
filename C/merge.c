//merging 2 arrays using pointer

#include<stdio.h>
int main()
{
	int a[100],b[100],*c[100],i,j,n,m;
	printf("enter size of 'a' array:\n");
	scanf("%d",&n);
	printf("enter elements of 'a' array:");
	for(i=0;i<n;i++)		//storing 'a' array elements into pointer array
	{
		scanf("%d",a+i);
		*(c+i)=a+i;
	}
	printf("enter size of 'b' array:");
	scanf("%d",&m);
	printf("enter elements of 'b' array:\n");
	for(j=0;j<m;j++)			
	//storing 'b' array elements into pointer array continuation to 'a' array elements
	{
		scanf("%d",b+j);
		*(c+i+j)=b+j;
	}
	for(i=0;i<(n+m);i++)			//printing elements stored in pointer
		printf("%d ",*(c[i]));
}

