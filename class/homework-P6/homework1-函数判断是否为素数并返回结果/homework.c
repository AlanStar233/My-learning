#include <stdio.h>
#include <math.h>
int fun(int num)
{
    int k,i;
    k=sqrt(num);
    for(i=2;i<=k;i++)
        if(num%i==0) break;
    if(i>=k+1) return num;
    else return 0;
}
void main()
{
    int i,number,t;
    printf("Please type your number:");
    scanf("%d",&number);
    t=fun(number);
    if(t==0) printf("No %d",number);
    else printf("Yes %d",t);
    /*coder:杨佳林-2031030054*/
}