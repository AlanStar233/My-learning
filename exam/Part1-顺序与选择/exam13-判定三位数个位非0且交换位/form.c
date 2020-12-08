/*13.	键盘输入一个正整数，如果输入的是三位数且个位不是0时，交换个位和百位再输出交换后的三位数，如果个位是0原样输出这个三位数。否则输出"输入不符合条件"。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int number,bai=0,shi=0,ge=0,swap=0,result;
    printf("Please type your number:");
    scanf("%d",&number);
    if(number>=100 && number<=999 && number%10!=0)
    {
        bai=(number-shi*10-ge)/100;
        shi=(number%100-ge)/10;
        ge=number%10;
        swap=ge;
        ge=bai;
        bai=swap;
        result=bai*100+shi*10+ge;
        printf("%d %d %d",bai,shi,ge);
        printf("The result is:%d",result);
    }
    else if(number>=100 && number<=999 && number%10==0)
    {
        printf("The result is:%d",number);
    }
    else printf("Your input is Valid!");

}