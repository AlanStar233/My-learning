#include <stdio.h>
void main()
{
    float C,F;    /*考虑到温度存在小数，故定义浮点型变量C,F*/
    scanf("%f",&C);    /*调用scanf函数记录C值，存入内存*/
    F=1.8*C+32;    /*进行公式运算(由于直接计算9/5，会被程序取整，故这里改为1.8，不影响结果)*/
    printf("The output Fahrenheit degree is:%-8.1f\n",F);    /*打印F，保留一位小数*/
}