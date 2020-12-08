/*6.输入十个分数，去掉最高分和最低分后求平均分，保留一位小数。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int score[10],i,max=0,min=0;
    float sum=0.00,average=0.00;
    for(i=0;i<=9;i++)    /*循环赋值*/
    {
        printf("Please type your score:");
        scanf("%d",&score[i]);
    }
    //求max部分
    max=score[0];    /*max赋初值*/
    for(i=0;i<=9;i++)    /*循环比较并得到max*/
    {
        if(score[i]>max)
        {
            max=score[i];
        }
    }
    //求min部分
    min=score[0];    /*min赋初值*/
    for(i=0;i<=9;i++)    /*循环比较并得到min*/
    {
        if(score[i]<min)
        {
            min=score[i];
        }
    }
    //求sum部分
    for(i=0;i<=9;i++)
    {
        sum=sum+score[i];
    }
    sum=sum-max-min;    /*刷新sum值，去掉max & min*/
    average=sum/8;
    printf("Max is:%d\nMin is:%d\nSum is:%4.1f\nAverage is:%4.1f",max,min,sum,average);
}