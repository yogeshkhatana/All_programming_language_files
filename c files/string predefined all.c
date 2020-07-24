#include<stdio.h>
#include<conio.h>
void main()
{char a[80],b[80];
 int value;
 printf("\nEnter first string:\n");
 gets(a);
 printf("\nEnter second string:\n");
 gets(b);
 value=strcmp(a,b);
 if(value==0)
 puts("strings are equal");
 else if(value>0)
 printf("First string is bigger:\n");
 else if(value<0)
 printf("Second string is bigger:\n");
 printf("reverse of the string is:%s\n",strrev(a));
 printf("lower case of the string is:%s\n",strlwr(a));
 printf("upper case of the string is:%s\n",strupr(b));
 strcat(a,b);
 printf("the two strings are joined together:%s\n",a);
 strcpy(a,b);
 printf("First string is copied\nfirst string is %s,and second string is %s\n",a,b );

 getch();
 }
