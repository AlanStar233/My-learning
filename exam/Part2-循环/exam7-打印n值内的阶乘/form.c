/*7.编程从键盘输入n值（10>= n >=3），然后计算并输出1！+2！+3！+…+n!。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int n,result=0,single,i,j;
    printf("Please type n:");
    scanf("%d",&n);
    if(n>=3 && n<=10)
    {
        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                single=j*single;
            }
            result=result+single;
        }
        printf("The final result is:%d",result);
    }
    else printf("Unvalid input!");
}