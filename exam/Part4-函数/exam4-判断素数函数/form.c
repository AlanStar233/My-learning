/*4.编写函数 fun，其功能是：判断一个正整数是否是素数，是素数输出Yes；不是素数输出No。*/
#include <stdio.h>
#include <math.h>
int fun(int num)    /*定义函数*/
{
    if(num<=0) return(0);    /*当输入值为负数，返回错误信息*/
    else
    {
        int k,i;
        //执行判断
        k=sqrt(num);
        for(i=2;i<=k;i++)
            if(num%i==0) break;
        if(i>=k+1) return(printf("Yes!"));
        else return(printf("No!"));
    }
}
void main()
{
    int number,result;
    printf("Please type your number:");
    scanf("%d",&number);
    result=fun(number);
    if(result==0) printf("Unvalid input!");
    else fun(number);
}