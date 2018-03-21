#include<stdio.h>
#include<string.h>
void strpal(char str[],int l);
main()
{
char str[];
printf("Enter the string");
gets(str);
l=strlen(str);
strpal(str,l);
}
void strpal(char str[],int l)
{
int i,j,flag;
for(i=0,j=l-1;i<l/2;i++,j--)
{
if(str[i]==str[j])
flag=1;
}
if(flag==1)
{
printf("string is palindrome");
}
else
{
printf("string is not palindrom");
}
}

