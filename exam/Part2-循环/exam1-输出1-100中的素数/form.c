/*1.输出1~100之间的素数。*/
#include <stdio.h>
#include <math.h>
void main()
{
    int IsPrime=1,i,j;    /*定义素数初始化*/
    for(i=2;i<101;i++)
    {
        IsPrime=1;    /*强制初始化*/
        if(i==2)
        {
            printf("%d ",i);
            continue;
        }
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                IsPrime=0;    /*非素数*/
                break;
            }
        }
        if(IsPrime==1)
        {
            printf("%d ",i);
        }
    }
}