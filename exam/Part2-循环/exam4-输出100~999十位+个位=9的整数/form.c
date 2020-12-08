/*4.输出100～999中所有个位数和十位数之和为9的整数，要求每行输出10项，并统计输出这样的数共有多少个。*/
#include <stdio.h>
void main()
{
    int bai=0,shi=0,ge=0,number,count=0,plus;
    for(number=100;number<999;number++)    /*number自增*/
    {
        ge=number%10;    /*求个位*/
        shi=(number%100-ge)/10;    /*求十位*/
        bai=(number-shi*10-ge)/100;    /*求百位*/
        plus=shi+ge;
        {
            if(plus!=9) continue;    /*十位+个位=0?*/
            else printf("%d  ",number);
            count++;
            if(count%10==0) printf("\n");    /*换行*/
        }
    }
    printf("The count is:%d\n",count);
}