/*3.编写函数fun，其功能是：求两个实数的最小值，结果作为函数值返回。*/
#include <stdio.h>
int fun(int a,int b)
{
    int min;    /*定义min变量*/
    //执行判断
    if(a>b) min=b;    
    else if(a<b) min=a;
    else if(a=b) return(0);
    return(min);
}
void main()
{
    int first,second,result,number;
    printf("Please type two number:");
    scanf("%d %d",&first,&second);
    result=fun(first,second);
    if(result==0) printf("They are balanced!");
    else printf("The min one is:%d",result);
}