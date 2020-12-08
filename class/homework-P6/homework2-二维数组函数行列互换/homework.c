#include <stdio.h>
void fun_switch(int a[3][3],int b[3][3])
{
    int i,j;
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            b[j][i]=a[i][j];
            printf("%d\t",b[j][i]);
        }
        printf("\n");
    }
}
void main()
{
    int i,j;
    int a[3][3],b[3][3];
    printf("Please type your number:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    fun_switch(a[3][3],b[3][3]);
}