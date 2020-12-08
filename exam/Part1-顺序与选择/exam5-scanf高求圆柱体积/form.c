/*5.	有一圆柱体的半径为15厘米，从键盘输入高度（高度>0）。如果高度小于等于30厘米，则计算圆柱体的体积并输出；否则输出"条件不满足"。
要求：圆周率用符号常量定义，有输入提示，输出结果标注单位并保留两位小数。*/
#include <stdio.h>
void main()
{
    int h;    /*定义h*/
    float v,pi=3.14;    /*定义浮点v，pi赋初值*/
    printf("Please type your h:");
    scanf("%d",&h);
    if(h<0 || h>30) printf("Unvalid height!");
    else
    {
        v=pi*15*15*h;
        printf("The cylinder's V is:%6.2f cm^3",v);
    }
    
}
