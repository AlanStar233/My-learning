/*2.从键盘输入一个长方体的长宽高，用函数实现求长方体的体积，
由主函数调用该函数，要求长方体的长、宽、高从主函数输入，长方体的体积作为函数返回值。*/
#include <stdio.h>
float Volume(float length,float width,float height)
{
    float V=0.00;    /*对V初始化*/
    V=length*width*height;    /*执行计算*/
    return (V);    /*return V值*/
}
void main()
{
    float my_length,my_width,my_height,my_V;
    printf("Please type your length & width & height:");
    scanf("%f %f %f",&my_length,&my_width,&my_height);
    my_V=Volume(my_length,my_width,my_height);
    printf("The final result is:%4.2f",my_V);
}