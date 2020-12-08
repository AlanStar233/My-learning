/*7.求分段函数值: 
f(x)=(x+1)/(x-2)      (x>0且x≠2)
f(x)=0              (x=0或x=2)
f(x)= (x-1)/(x-2)      (x<0)
要求：有输入提示，输出结果保留两位小数。
*/
#include <stdio.h>
void main()
{
    float x,y;
    printf("Please type the value of x:");    /*获取x，y的值*/
    scanf("%d",x);
    printf("Please type the value of y:");
    scanf("%d",y);
    if(x>0 && x!=2)    /*执行运算*/
    {
        y=(x+1)*(x-2);
        printf("The result is:%6.2f",y);
    }
    else if((x=0) || (x=2))
    {
        y=0;
        printf("The result is:%6.2f",y);
    }
    else if(x<0)
    {
        y=(x-1)/(x-2);
        printf("The result is:%6.2f",y);
    }
}