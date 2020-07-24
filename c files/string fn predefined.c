#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{char str[80],str1[80];
 int a;
 printf("Enter first string:\n");
 gets(str);
 printf("Enter second string:\n");
 gets(str1);
 a=strcmp(str,str1);
  if(a==0)
   puts("\nTwo strings are equal\n");
   else if(a>0)
    printf("\nThe first string is bigger\n%d",a);
    else if(a<0)
     printf("\nThe first string is smaller\n%d",a);
  printf("\nThe lower case of the string is:%s\n",strlwr(str));
  printf("\nThe upper case of the second string is:%s\n",strupr(str1));
  strcat(str,str1);
  printf("\nThe two string are joined together:%s\n",str);
  printf("\nThe reverse of the string is:%s\n",strrev(str));
  strcpy(str,str1);
  printf("\nThe first string is copied \nFirst string is %s,and second string is%s\n",str,str1);
  printf("%d",strlen(str));
  getch();
}
