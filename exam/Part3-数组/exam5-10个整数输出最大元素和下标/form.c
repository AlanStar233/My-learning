/*5.键盘输入10个整数存入数组a中，输出最大元素值和它所在的下标。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int a[10],i,number=0,max;    /*定义并初始化变量*/
    for(i=0;i<=9;i++)    /*循环赋值*/
    {
        printf("Please type your number:");
        scanf("%d",&a[i]);
    }
    max=a[0];    /*对max初始化，指向数组初值*/
    for(i=0;i<=9;i++)    /*循环比较并获取number*/
    {
        if(a[i]>max)
        {
            max=a[i];
            number=i;
        }
    }
    printf("The max element is:%d\nThe number is:%d",max,number);
}