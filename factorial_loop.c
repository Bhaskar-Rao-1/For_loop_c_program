#include<stdio.h>

int main()
{
    int i;
    int fact=1;
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {

        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}