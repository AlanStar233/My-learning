/*10．输出一个整数数组中各元素的绝对值（用函数实现）*/
#include <stdio.h>
void absolute(int a[5])
{
    int i;
    for(i=0;i<=4;i++)    /*循环判断*/
    {
        if(a[i]<0) printf("%d ",-a[i]);    /*如果对应数字小于0，则打印负值*/
        else printf("%d ",a[i]);    /*反之直接输出*/
    }
}
void main()
{
    int number[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Please type your number:");
        scanf("%d",&number[i]);
    }
    absolute(number);

}