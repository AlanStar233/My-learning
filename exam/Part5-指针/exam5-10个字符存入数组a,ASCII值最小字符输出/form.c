/*5.用指针实现：输入10个字符存入数组a中，找出其中ASCII值最小字符输出。*/
#include <stdio.h>
void main()
{
    int i;    /*定义循环变量i*/
    char a[10];    /*定义数组a,存放字符*/
    char *pointer,min;    /*定义指针pointer,最小值min*/
    pointer=a;    /*将pointer初始化并指向a*/
    printf("Please type char:\n");
    //循环读取
    for(i=0;i<=9;i++)
    {
        scanf("%c",pointer+i);
    }
    //循环判断最小值
    min=*pointer;    /*对min初始化，指向pointer*/
    for(i=0;i<=9;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The min char is:%c",min);
}