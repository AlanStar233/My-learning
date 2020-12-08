/*7.输入4个学生的3门课程的考试成绩，编写程序计算每个学生的平均成绩，最后输出计算后的结果。
要求：有输入提示和输出显示。*/
#include <stdio.h>
void main()
{
    int score[4][3],i,j,average_1,average_2,average_3,average_4;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("Please type your score:");
            scanf("%d",&score[i][j]);
        }
    }
    average_1=(score[0][0]+score[0][1]+score[0][2])/3;
    average_2=(score[1][0]+score[1][1]+score[1][2])/3;
    average_3=(score[2][0]+score[2][1]+score[2][2])/3;
    average_4=(score[3][0]+score[3][1]+score[3][2])/3;
    printf("The average of First student is:%d\n",average_1);
    printf("The average of Second student is:%d\n",average_2);
    printf("The average of Third student is:%d\n",average_3);
    printf("The average of Fourth student is:%d\n",average_4);
}