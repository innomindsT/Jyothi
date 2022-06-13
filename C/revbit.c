//program to reverse bits of an integer

#include<stdio.h>
#include<string.h>
int main()
{	
	int n,i,j=0,temp,l,arr[15],ar[15];
	printf("enter a  number:");
	scanf("%d",&n);
	printf("after reversal:");
	while(n>0)
	{	
		i=n%2;
		printf("%d",i);
		arr[j]=i;
		n=n/2;
		j++;
	}
	l=j;
	for(i=0;i<=(l/2);i++,l--)
	{
		temp=arr[i];
		arr[i]=arr[l-1];
		arr[l-1]=temp;
	}
	printf("\nactual number in binary:");
	for(i=0;i<j;i++){
		printf("%d",arr[i]);
	}
}
