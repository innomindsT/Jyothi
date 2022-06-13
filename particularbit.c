//program to set/reset a particular bit of an integer
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j=0,temp,l,arr[15],k;
	printf("enter a  number:");
	scanf("%d",&n);
	while(n>0)			//cont division by 2,we will get in rev 
	{	
		i=n%2;
		arr[j]=i;
		n=n/2;
		j++;
	}
	l=j;
	for(i=0;i<=(l/2);i++,l--)	//reversing
	{
		temp=arr[i];
		arr[i]=arr[l-1];
		arr[l-1]=temp;
	}
	printf("number in binary format:");	//printing binary format
	for(i=0;i<j;i++){
		printf("%d",arr[i]);
	}
	printf("\nenter the bit index u want to set/reset:");
	scanf("%d",&k);
	arr[k]=arr[k]^1;				//set/resetting particular bit using XOR
	printf("after set/reset %d index:",k);	
	for(i=0;i<j;i++){
		printf("%d",arr[i]);
	}
}
