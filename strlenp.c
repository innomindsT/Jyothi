#include<stdio.h>
#include<string.h>
int main()
{	char str[50],*p;
	int count=0,i,l;
	printf("enter a string:");
	scanf("%s",str);
	p=str;
	for(i=0;*(p+i)!='\0';i++)	//count increases when char!=\0
		count++;
	printf("len:%d",count);	
	

}
