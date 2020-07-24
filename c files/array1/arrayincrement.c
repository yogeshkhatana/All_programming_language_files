#include<stdio.h>
#include<stdlib.h>
void main()
{

    arraypointer();
    int *p=(int*)malloc(5*sizeof(int));
    int *q=(int*)malloc(10*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[3]=3;
    p[4]=4;
    p[5]=5;
    for(int i=0;i<5;i++)
    {
        printf("%d",p[i]);
    }
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<10;i++)
    {
        printf("%d",p[i]);
    }
    return 0;
}
