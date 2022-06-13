//program to flip bits
#include<stdio.h>
#include<string.h>
int main()
{	
	int n,i,j=0,temp,l,arr[15];
	printf("enter a  number:");
	scanf("%d",&n);
	while(n>0)				//cont division by 2,we will get in rev 
	{	
		i=n%2;
		arr[j]=i;
		n=n/2;
		j++;
	}
	l=j;
	for(i=0;i<=(l/2);i++,l--)		//reversing
	{
		temp=arr[i];
		arr[i]=arr[l-1];
		arr[l-1]=temp;
	}
	printf("int number in binary:");		//printing binary format
	for(i=0;i<j;i++){
		printf("%d",arr[i]);
	}
	printf("\nafter flipping of bits:");		//flipping all bits using XOR
	for(i=0;i<j;i++)
	{	arr[i]=arr[i]^1;
		printf("%d",arr[i]);
	}
}
