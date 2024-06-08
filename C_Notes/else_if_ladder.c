
#include<stdio.h>
void main()
{
    int a, b, c;
    printf("enter the three values");
    scanf("%d%d%d",&a,&b,&c);
    
    if(b>a && b>c)
    {
        printf("b is grestest");
        
    }
    else if(c>a && c>b)
    {
        printf("c is grestest");
        
    }
    else if(a>b && a>c)
    {
        printf("a is grestest");
    }
    else
    {
        printf("all are equal");
    }
}