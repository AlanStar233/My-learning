/*1.键盘输入8个整数放入数组x中，输出小于平均元素值的元素。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int i,x[10];    /*定义循环变量i，定义数组x[10]*/
    float average=0.00,sum=0.00;    /*定义average与sum并初始化*/
    for(i=0;i<=9;i++)    /*循环键入x[i]*/
    {
        printf("Please type your number:");
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<=9;i++)    /*循环求和*/
    {
        sum=sum+x[i];
    }
    average=sum/10;    /*求average*/
    printf("The average is:%.2f\n",average);    /*打印average*/
    for(i=0;i<=9;i++)    /*循环average与x[i]的比较并打印*/
    {
        if(average>=x[i]) printf("%d ",x[i]);
    }
}