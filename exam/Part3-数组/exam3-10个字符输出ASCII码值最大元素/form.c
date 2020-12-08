/*3.键盘输入10个字符放入数组中，输出ASCII码值最大的元素、它的ASCII码值和它所在的下标。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    char ch[10];    /*初始化数组*/
    int i=0,max=0,number=0;    /*定义i,i循环变量，max用于循环更新最大值，number用于获取下标*/
    printf("Please type your char:");
    for(i=0;i<=9;i++)    /*循环赋值*/
    {
        ch[i]=getchar();    /*引入getchar来为每个元素赋值*/
    }
    max=ch[0];    /*max初始化为数组起点*/
    for(i=0;i<=9;i++)    /*循环比较&获取下标*/
    {
        if(ch[i]>max)
        {
            max=ch[i];
            number=i;
        }
    }
    printf("The max element is:%c\nThe ASCII number is:%d\nThe element's number is:%d",max,max,number);
}