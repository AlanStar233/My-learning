/*5．编写函数 fun，其功能是：计算5门课程的平均分，结果作为函数值返回。5门课程的成绩在键盘上输入。*/
#include <stdio.h>
float fun(float a,float b,float c,float d,float e)
{
    float average;    /*定义average*/
    //执行计算
    average=(a+b+c+d+e)/5;
    return(average);
}
void main()
{
    float score_a,score_b,score_c,score_d,score_e;
    printf("Please type your score:");
    scanf("%f %f %f %f %f",&score_a,&score_b,&score_c,&score_d,&score_e);
    printf("The average is:%4.2f",fun(score_a,score_b,score_c,score_d,score_e));
}