/*5.输入n的值，n代表行数，输出如图所示的图形。*/
#include <stdio.h>
void main()
{
    int n,i,j,k;
    printf("Please type the line which you want to display:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)    /*外部变量i控制打印行数*/
    {
        for(j=0;j<n-i;j++)    /*内部变量j控制前置打印空格数*/
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)    /*内部变量k控制打印 "*" 字符数，k服从k<=2*i-1 表达式 */
        {
            printf("*");
        }
        printf("\n");    /*由外部变量i控制适时换行*/
    }
}