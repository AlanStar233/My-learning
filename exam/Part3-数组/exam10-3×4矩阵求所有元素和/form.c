/*10.有一个3×4的矩阵a，要求编程序求出所有元素的和。
  1    2    3    4
a=3    4    5    6
  5    6    7    8
*/
#include <stdio.h>
void main()
{
    int a[3][4]={{1,2,3,4},{3,4,5,6},{5,6,7,8}},i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("The final result is:%d",sum);
}