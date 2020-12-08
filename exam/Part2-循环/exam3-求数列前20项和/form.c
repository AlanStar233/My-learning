/*3.有一数列为：2/1，3/2，5/3，8/5，13/8，21/13，…求这数列的前20项的和。
              2.00 1.50 1.67 1.60 
要求：有输入提示，输出结果保留两位小数。*/
#include <stdio.h>
void main()
{
    int temp_son,temp_mother,i;
    float result=3.50,old_son=2.00,old_mother=1.00,son=3.00,mother=2.00;
    char check;
    printf("Do you want to execute this programme?  (Y or N):");
    scanf("%c",&check);
    if(check=='Y' || check=='y')
    {
        for(i=2;i<20;i++)
        {
            temp_son=son;
            temp_mother=mother;
            son=old_son+son;
            mother=old_mother+mother;
            result=result+(son/mother);
            old_son=temp_son;
            old_mother=temp_mother;
        }
        printf("The final result is:%4.2f",result);
    }
    else if((check=='N') || (check=='n'))
    {
        printf("You stopped this programme!");
    }
    else printf("Unvalid input!");
}