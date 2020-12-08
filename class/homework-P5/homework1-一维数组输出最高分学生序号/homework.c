#include <stdio.h>
void main()
{
    int score[10];
    int i,max;
    for(i=0;i<=9;i++)
    {
        printf("Please type number:");
        scanf("%d",&score[i]);
    }
    max=score[0];
    for(i=0;i<=9;i++)
    {
        if(score[i]>max) max=score[i];
    }
    printf("The max number is:%d at line:%d",max,i);
    /*coder:杨佳林-2031030054*/
}