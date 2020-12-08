#include <stdio.h>
void main()
{
    int a,b,c,mount;
    printf("Please type three number:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)    /*当a>b时*/
    {
        if(b>c) printf("%d",a);    /*a>b>c时，输出a*/
        else if(c>a) printf("%d",c);    /*a>b c>a时，输出c*/
        else if(a>c && c>b) printf("%d",a);    /*a>b a>c c>b时，输出a*/
    }
    else if(b>a)    /*当b>a时*/
    {
        if(a>c) printf("%d",b);    /*b>a>c时，输出b*/
        else if(c>b) printf("%d",c);    /*c>b>a时，输出b*/
        else if(b>c && c>a) printf("%d",b);    /*b>a b>c c>a时，输出b*/
        /*coder:杨佳林-2031030054*/
    }

}