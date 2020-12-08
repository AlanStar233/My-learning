#include <stdio.h>
void main()
{
    int length;
    char num[4];
    printf("Please type a number:");
    scanf("%s",&num);
    if(num>0)
    {
        printf("该数字为正整数!将进行下一步操作!\n");
        goto method1;    /*跳转至方法1-求数字位数*/
        goto method2;    /*跳转至方法2-分别输出每一位数字*/
        goto method3;    /*跳转至方法3-逆序输出各位数字*/
    }
    else printf("键入数字无效!\n"); goto bye;    /*跳转至方法bye-结束程序*/

    method1:    /*方法1:-求数字位数*/
    {
        length=strlen(num);
        printf("该数字的长度为：%d 位\n",length);
    }
    method2:    /*方法2:-分别输出每一位数字*/
    {
        printf("正序输出:%c %c %c %c\n",num[0],num[1],num[2],num[3]);
    }
    method3:    /*方法3:-逆序输出各位数字*/
    {
        printf("逆序输出:%c %c %c %c\n",num[3],num[2],num[1],num[0]);
    }
    bye:
    {
        printf("程序即将结束\n");
        system("pause");
    }
    /*coder:杨佳林-2031030054*/
}