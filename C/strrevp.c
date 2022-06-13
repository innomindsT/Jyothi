//a program to reverse string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50],*p,ch;
	int i,j,l;
	printf("enter string:");
	scanf("%s",arr);
	p=arr;
	l=strlen(arr);
	for(i=0,j=l;i<j;i++,j--)		//swapping first and last char gradually to make it reverse
	{
		ch=*(p+i);
		*(p+i)=*(p+j-1);
		*(p+j-1)=ch;	
	}
	printf("%s",arr);
}
