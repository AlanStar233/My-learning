/*15.	给一个不多于5位的正整数，求它是几位数。 
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int number;
    printf("Please type your number:");
    scanf("%d",&number);
    if(number>=1 && number<=9) printf("The number's bits is 1");
    else if(number>=10 && number<=99) printf("The number's bits is 2");
    else if(number>=100 && number<=999) printf("The number's bits is 3");
    else if(number>=1000 && number<=9999) printf("The number's bits is 4");
    else printf("Your input is Unvalid!");
}