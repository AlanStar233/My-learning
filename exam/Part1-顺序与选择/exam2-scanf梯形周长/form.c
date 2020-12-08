/*2.	有梯形上、下边长分别为5和11，从键盘输入其它两条边的边长。如果输入的两条边长相等，则求算梯形的高并输出；否则求算梯形的周长并输出。
提示：求某数x的平方根函数是：sqrt(x) ，使用该函数要在程序头部加载（包含）<math.h>文件。*/
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,h;    /*定义边长a,b;高h*/
    printf("Please type first edge:");
    scanf("%d",&a);
    printf("Please type second edge:");
    scanf("%d",&b);
    if(a<=3 || b<=3) printf("Unvalid edges!");
    else if(a==b)    /*如果a=b，求高并打印*/
    {
        h=sqrt(a*a-9);
        printf("The trapezoid's height is:%d",h);
    }
    else printf("The trapezoid's c is:%d",a+b+16);    /*打印周长*/
}
