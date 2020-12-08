#include <stdio.h>
void main()
{
    int x,y;    /*定义整型变量x，y*/
    char ch1,ch2;    /*定义字符型变量ch1,ch2*/
    float a,b,c;    /*定义浮点型变量a,b,c*/
    scanf("%5d%5d%c%c%f%f%*f,%f",&x,&y,&ch1,&ch2,&a,&b,&c);    /*以书中条件调用scanf函数执行键入操作，将x,y,ch1,ch2,a,b,c存入内存*/    
    /*此处应在DOS界面输入下方字符，IDE提供了"·"表明"空格"*/
    /*   20   30Bb3.2 -1.56 1.5,45.78*/
    printf("x=%d y=%d ch1=%c ch2=%c a=%-3.1f b=%-3.2f c=%-8.2f\n",x,y,ch1,ch2,a,b,c);    /*以对应类型分别输出字符，并对a,b,c做位数处理*/
    /*coder:杨佳林-2031030054*/
}