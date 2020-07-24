#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char str[30]="ram",str1[30]={'s','a','m'},str2[30]="jam",str3[30]="jam";
strupr(str);
printf("%s",str);
strcpy(str,str1);
printf("%s",str);
strcat(str,str1);
printf("%s",str);
{if(strcmp(str2,str3)==0)
  {

    printf("equal");}
 else
   {

 printf("not equal");}
}
 getch();
}
