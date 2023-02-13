#include<stdio.h>
int main()
{
    int a;
    printf("a=");
    scanf("%d", &a);
    int b;
    printf("b=");
    scanf("%d", &b);
    int c;
    printf("c=");
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("a=%d is max", a);
    }
    if (b>a && b>c)
    {
        printf("b=%d is max", b);
    }
    if (c>a && c>b)
    {
        printf("c=%d is max",c);
    }
    if (a==b && b==c)
    {
        printf("ALL ARE EQUAL");
    }
    return 0;
}