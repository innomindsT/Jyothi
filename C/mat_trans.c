//program to transpose a matrix with any order n*m
#include<stdio.h>
int main()
{
	int i,j,n,m,a[15][15],max=0;
	printf("enter rows count:");
	scanf("%d",&n);
	printf("enter coloumns count:");
	scanf("%d",&m);
	max=(m>n)?m:n;			//n!=m case get failed if won't consider max
	for(i=0;i<n;i++)			//reading elements
	{
		for(j=0;j<m;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)			//printing matrix
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n"); 
	}
	
	//diagonal elements won't change after transpose
	//no need for doing i<j ..as they r already swapped
	
	for(i=0;i<max;i++)			//n!=m case get failed if won't consider max
	{
		for(j=i+1;j<max;j++)
		{
			if(i!=j)
			{	a[i][j]=a[i][j]+a[j][i];
				a[j][i]=a[i][j]-a[j][i];
				a[i][j]=a[i][j]-a[j][i]; 	
			}
		}
	}
	printf("\n");
	
	for(i=0;i<m;i++)			//printing transposed matrix
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
