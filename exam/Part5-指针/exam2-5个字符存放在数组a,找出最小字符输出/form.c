/*2.用指针实现：输入5个字符存放在数组a中，找出其中最小字符并输出。*/
#include <stdio.h>
void main()
{
    int i;    /*定义循环变量i*/
    char a[5],min;    /*定义数组a,最小值min*/
    char *pointer;    /*定义指针pointer，与a类型一致*/
    pointer=a;    /*对pointer初始化，指向a第一个位置*/
    printf("Please type char:\n");
    //循环读取
    for(i=0;i<=4;i++)
    {
        scanf("%c",pointer+i);
    }
    //循环判断最小值
    min=*pointer;    /*对min初始化，指向pointer*/
    for(i=0;i<=4;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The min char is:%c",min);
}