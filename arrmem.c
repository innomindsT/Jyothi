//memory allocated to a given integer array

#include<stdio.h>
int main()
{
	unsigned int arr[50],membytes;			//array size is predefined here=50
	unsigned int n=sizeof(arr)/sizeof(int);
	printf("array size=%u\n",n);
	membytes=n*sizeof(int);				//sizeof arr*size of element in arr
	printf("memory allocated is '%u' bytes",membytes);

}
