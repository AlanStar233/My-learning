/*1.用指针实现：输入5个字符存放在数组a中，找出数组a中所有大于大写字母C的字符并输出。*/
#include <stdio.h>
void main()
{
    int i;    /*定义循环变量*/
    char a[5];    /*定义数组a*/
    char *pointer;    /*定义指针pointer,数据类型需要与a同步*/
    pointer=&a[0];    /*对pointer的指向进行初始化,指向数组a的第一位*/
    printf("Please type char:\n");
    //循环读取
    for(i=0;i<=4;i++)
    {
        scanf("%c",pointer+i);    /*调用了pointer+i，但输入时一次性全部键入即可*/
    }
    //循环判断&输出
    for(i=0;i<=4;i++)
    {
        if(*(pointer+i)>'C') printf("%c ",*(pointer+i));
    }
}