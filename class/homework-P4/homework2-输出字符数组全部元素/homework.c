#include <stdio.h>
void main()
{
    char c[9] = "Welcome!";    /*定义字符数组c，赋值*/
    int i;    /*定义整型循环变量i*/
    for(i=0;i<9;i++)    /*因为有9个元素，所以构建循环逐步输出元素*/
        printf("%c",c[i]);    /*为for的子函数，逐个打印c[i]*/
    printf("\n");    /*换行*/
    /*coder:杨佳林-2031030054*/
}