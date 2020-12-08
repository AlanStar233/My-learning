#include <stdio.h>
void main()
{
    int i,j,k,temp;
    int t,score[10];
    for(i=0;i<10;i++)
    {
        printf("Please type Judges score:");
        scanf("%d",&score[i]);
    }
    for(j=0;j<9;j++)
    {
        for(i=0;i<10;i++)
        {
            if(score[i]>score[i+1])
            {
                temp=score[i];
                score[i]=score[i+1];
                score[i+1]=temp;
            }
        printf("This is %d's terms of turn!\nstatus:\n",j+1);
        for(k=0;k<10;k++)
        {
            printf("%d ",score[k]);
        }
        printf("The result is:\n");
        for(k=0;k<10;k++)
        {
            printf("%d ",score[k]);
        }
        }
    }
}