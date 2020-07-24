#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int *P;
    P=(int*)malloc(5*sizeof(int));
    P[0]=1;
    P[1]=2;
    P[2]=3;
    for(int i=0;i<5;i++)
    {

        printf("%d",P[i]);
    }
    return 0;
}
