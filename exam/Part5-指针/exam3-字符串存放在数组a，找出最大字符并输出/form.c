/*3.用指针实现：输入一个字符串（长度小于5）存放在a数组中，找出其中最大字符并输出。*/
#include <stdio.h>
void main()
{
    int i;    /*定义循环变量i*/
    char a[4],max;    /*定义数组a，控制长度为4，定义max*/
    char *pointer;    /*定义pointer，类型与a一致*/
    //获取string
    printf("Please type the string:");
    scanf("%s",&a);
    //将pointer指向a[0]
    //max指向pointer第一位
    pointer=&a[0];
    max=*pointer;
    //循环判断
    for(i=0;i<=3;i++)
    {
        if(a[i]>max) max=a[i];
    }
    printf("The max char is:%c",max);
}