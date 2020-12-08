/*4.键盘输入10个整数存入数组a中，输出最小元素值和它所在的下标。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int a[10],i,number=0,min;    /*定义并初始化变量*/
    for(i=0;i<=9;i++)    /*循环赋值*/
    {
        printf("Please type your number:");
        scanf("%d",&a[i]);
    }
    min=a[0];    /*对min初始化，指向数组初值*/
    for(i=0;i<=9;i++)    /*循环比较并获取number*/
    {
        if(a[i]<min)
        {
            min=a[i];
            number=i;
        }
    }
    printf("The min element is:%d\nThe number is:%d",min,number);
}