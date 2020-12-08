/*7．编写函数fun，其功能是：打印九九乘法表。*/
#include <stdio.h>
void fun()
{
    int i,j;
    for(i=1;i<=9;i++)    /*外部循环，控制第二个数*/
    {
        for(j=1;j<=9;j++)    /*内部循环，控制第一个数*/
        {
            printf("%d*%d=%d ",j,i,i*j);    /*打印*/
            if(i==j)    /*换行*/
            {
                printf("\n");
                break;
            } 
        }
    }
}
void main()
{
    fun();
}