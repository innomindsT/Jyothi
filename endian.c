//a character pointer c is pointing to an integer i. Since size of character is 1 byte when the character pointer is de-referenced it will contain only first byte of integer. If machine is little endian then *c will be 1 (because last byte is stored first) and if the machine is big endian then *c will be 0. 

#include <stdio.h>
int main()
{
   unsigned int i = 1;
   char *c = (char*)&i;
   //printf("%d\n",*c);
   if (*c)   
       printf("little endian");
   else
       printf("Big endian");
}
