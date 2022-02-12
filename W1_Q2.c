#include<stdio.h>
int main()
{
    int d,p;
    printf("Enter the value of d:");
    scanf("%d",&d);
    printf("Enter the value of p:");
    scanf("%d",&p);
    if(d>p)
        printf("%d is maximum",d);
    else
       printf("%d is maximum",p);
    return 0;
}