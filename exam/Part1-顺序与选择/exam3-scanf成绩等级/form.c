/*3.从键盘上输入一个百分制成绩score，
按下列原则输出其等级：
score≥90，等级为A；80≤score<90，等级为B；70≤score<80，等级为C；60≤score<70，等级为D；score<60，等级为E。
要求：有输入提示。*/
#include <stdio.h>
void main()
{
    int score;
    printf("Please type your score:");
    scanf("%d",&score);
    if(score>=90) printf("Your rank is A !");
    if(score>=80 && score<90) printf("Your rank is B !");
    if(score>=70 && score<80) printf("Your rank is C !");
    if(score>=60 && score<70) printf("Your rank is D !");
    if(score<60) printf("Your rank is E !");
}