/*6．有一个3×4的矩阵a，通过函数方法求矩阵中所有元素的和。
  1    2    3    4
a=3    4    5    6
  5    6    7    8
*/
#include <stdio.h>
int sum(int a[3][4])
{
    int result,i,j;
    //执行计算
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            result=result+a[i][j];    /*循环求和*/
        }
    }
    return (result);    /*将结果return*/
}
void main()
{
    int base[3][4]={{1,2,3,4},{3,4,5,6},{5,6,7,8}},result=0;
    result=sum(base);
    printf("The final result is:%d",result);
}