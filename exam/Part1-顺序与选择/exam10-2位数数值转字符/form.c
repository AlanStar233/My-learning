/*10.	从键盘上输入一个正整数，如果是2位数，则将该数每位上的数值转换成字符并按原位序输出。否则，直接输出。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int number,ch1,ch2;
    printf("Please type your number:");
    scanf("%d",&number);
    if(number>=10 && number<=99)
    {
        ch1=number%10;
        ch2=number-ch1*10;
        printf("The result is:%c %c",ch1,ch2);
    }
    else printf("%d",number);
}
/*主要是满足题意，0-9会存在特殊ASCII码值导致无法正常被IDE输出*/