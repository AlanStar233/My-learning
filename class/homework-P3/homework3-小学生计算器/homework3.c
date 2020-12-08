#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int a,b,user_answer,system_answer,operate,i,right_number=0;    /*a,b为算数左右两个数字，user_answer为用户答案，system_answer为系统答案*/
    char operate_char;    /*operate为运算符，i为循环变量，right_number为正确结果，初始化为0，定义字符型operate_char为运算符*/
    srand(time(NULL));    /*用srand将time转换为伪随机数*/
    for (i=0;i<10;i++)    /*设置10道题*/
    {
        a=rand()%10+1;    /*a取值范围在1~10*/
        b=rand()%10+1;    /*b取值范围在1~10*/
        operate=rand()%4+1;    /*operate取值范围在1~4*/
        switch (operate)    /*选择operate字符类型并做赋值定义*/
        {
        case 1: operate_char='+';
        system_answer=a+b;
        break;
        case 2: operate_char='-';
        system_answer=a-b;
        break;
        case 3: operate_char='*';
        system_answer=a*b;
        break;
        case 4: operate_char='/';
        system_answer=a/b;
        break;
        default:printf("Your operation is unvaild!");
        }
        printf("%d%c%d=?\n",a,operate_char,b);    /*开始出题*/
        scanf("%d",&user_answer);    /*键入用户结果*/
        if(user_answer==system_answer)    /*答案比对*/
        {
            printf("Right!");
            right_number=right_number+1;    /*正确题目数+1*/
        }
        else
        {
            printf("Wrong!");
        }
        printf("The result is:%d\n",right_number*10);    /*统计分数*/
        printf("The right rate is:%d%%\n",right_number*10);    /*计算正确率*/
    }
    /*coder:杨佳林-2031030054*/
}