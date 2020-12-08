#include <stdio.h>
void main()
{
    int num;
    printf("Please type your score:");
    scanf("%d",&num);
    if(num<0 || num>100) printf("Wrong input!");
    else if(num>=0 && num<59) printf("Your score is FAILED!");
    else if(num>=60 && num<69) printf("Your score is PASS!");
    else if(num>=70 && num<79) printf("Your score is MIDDLE!");
    else if(num>=80 && num<89) printf("Your score is GOOD!");
    else printf("Your score is EXCELLENT!");
    /*coder:Ñî¼ÑÁÖ-2031030054*/
}