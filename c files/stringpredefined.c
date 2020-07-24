#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{int ch,l1;
 char str1[30]="hari";
 char str2[30]={'r','a','m'};
 char l2[60],l3[60],l4[60],l5[60],l6[60];
 printf("Enter a number for apply predefined functions\n");
 printf("Enter 1 for length\n");
 printf("2 for catenation\n");
 printf("3 for copy string\n");
 printf("4 for lower\n");
 printf("5 for upper\n");
 printf("6 for compare string\n");
 scanf("%d",&ch);
 switch(ch)
 {case 1:l1=strlen(str1);
         printf("%d",l1);
         break;
  case 2:strcat(str1,str2);
         printf("%s",str1);
         break;
  case 3:strcpy(str2,str1);
        printf("%s",str2);
        break;
  case 4:strlwr(str1);
        printf("%s",str1);
        break;
  case 5:strupr(str1);
         printf("%s",str1);
         break;
  case 6:if(strcmp(str1,str2)==0)
        printf("equal");
        else
            printf("not equal");
        break;

  default:printf("UNDEFINED");
 }
 getch();

}
