/*2.从键盘输入m值(1≤m≤15)，计算
1/1 + 3/(1*3) + 5/(1*3*5) + 7/(1*3*5*7) + … +(2m-1)/(1*3*...*(2m-1))
 1  +  1/1      +  1/1*3      +   1/1*3*5      +   +1/1*3*...*(2m-3)
m=1   m=2        m=3          m=4                       m
前m项的和。
要求：有输入提示，输出结果保留两位小数。*/
#include <stdio.h>
void main()
{
    int m,i;
    float mother=1.00,son=1.00,result=1.00;    /*这里一定要预定义result为1，结合后者i的初始化，防止错位相加得到错误结果*/
    printf("Please type m (15>=m>=1):");
    scanf("%d",&m);
    if(m>=1 && m<=15)
    {
        for(i=1;i<m;i++)
        {            
            son=son+2;
            mother=mother*(mother+2);
            result=result+(son/mother);
        }
        printf("The result is:%4.2f",result);
    }
    else printf("Unvalid input!");
}