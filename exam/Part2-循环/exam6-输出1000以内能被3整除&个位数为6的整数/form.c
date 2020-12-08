/*6.输出1000以内能被3整除且个位数为6的所有整数，要求每行输出10个数。*/
#include <stdio.h>
void main()
{
    int number,count=0,ge;
    for(number=0;number<=1000;number++)
    {
        ge=number%10;
        if(number%3!=0 || ge!=6) continue;
        else printf("%d  ",number);
        count++;
        if(count%10==0) printf("\n");
    }
}