/*4.输入一个圆半径（r），当r≥10时，计算并输出圆的面积和周长，否则，输出"错误"提示信息。
要求：圆周率用符号常量定义，有输入提示，输出结果保留两位小数。
*/
#include <stdio.h>
void main()
{
    int r;    /*分别定义半径为整型变量*/
    float c,s,pi=3.14;    /*定义浮点型周长，面积，pi并赋初值3.14*/
    printf("Please circle's Round:");
    scanf("%d",&r);
    if(r>=10) printf("Unvalid Round!");    /*输出错误信息*/
    else
    {
        c=2*pi*r;
        s=pi*r*r;
        printf("The circle's C is:%6.2f , S is:%6.2f",c,s);
    }
    
}