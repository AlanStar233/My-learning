/*8.用指针实现：在输入的字符串中查找有无"k"字符。*/
#include <stdio.h>
#include <stdlib.h>    /*此处引入stdlib.h 用于调用system命令*/
void main()
{
    int i;    /*定义循环变量i*/
    char string[5];    /*定义string数组*/
    char *pointer;    /*定义pointer指针*/
    pointer=string;    /*将pointer指向string*/
    //获取string
    printf("Please type string:");
    scanf("%s",pointer);
    //执行循环判断
    for(i=0;i<=4;i++)
    {
        if(string[i]=='k')    /*当检测到元素含有'k'*/
        {
            printf("This string has letter 'k' !\n");    /*输出肯定回答*/
            goto exit;    /*跳转到exit*/
        }
    }
    printf("This string hasn't letter 'k' !\n");    /*在循环跳出时(即循环体无结果)输出否定回答*/
    exit:    /*goto语句指向的exit*/
    {
        system("pause");    /*调用system命令，提示"请按任意键继续..."*/
        printf("\n");    /*只是个换行*/
        system("exit");    /*调用system命令，强制结束程序*/
    }
}
