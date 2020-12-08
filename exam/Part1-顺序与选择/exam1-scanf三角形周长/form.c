/*1.	有一三角形的底边长为6，从键盘输入其它两条边的边长。如果输入的两条边长相等，则求算该三角形底边上的高并输出；否则求算三角形的周长并输出。
提示：求某数x的平方根函数是：sqrt(x)，使用该函数要在程序头部加载（包含）<math.h>文件*/
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,h;    /*定义边长a,b;高为h*/
    printf("Please type edge a:");
    scanf("%d",&a);
    printf("Please type edge b:");
    scanf("%d",&b);
    if(a+b>6 && abs(a-b)<6)    /*判断三角形成立性*/
    {
        if(a==b)    /*如果a=b*/
        {
            h=sqrt(a*a-9);    /*求高h*/
            printf("The triangle's height is:%d",h);    /*打印高*/
        }
        else printf("The triangle's c is:%d",a+b+6);    /*打印周长*/
    }
    else printf("Unvalid edges!");    /*输出三角形无效*/
}
