/*7.用指针实现：输入10个字符存入数组b中，找出其中ASCII值最大字符输出。*/
#include <stdio.h>
void main()
{
    int i;    /*定义循环变量i*/
    char b[10];    /*定义数组b,存放字符*/
    char *pointer,max;    /*定义指针pointer,最小值min*/
    pointer=b;    /*将pointer初始化并指向b*/
    printf("Please type char:\n");
    //循环读取
    for(i=0;i<=9;i++)
    {
        scanf("%c",pointer+i);
    }
    //循环判断最小值
    max=*pointer;    /*对min初始化，指向pointer*/
    for(i=0;i<=9;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("The max char is:%c",max);
}