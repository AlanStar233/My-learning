#include <stdio.h>
void main()
{
    int po=0,ne=0,mount;
    do
    {
        printf("Please type your mounts:");
        scanf("%d",&mount);
        if(mount>0) po=po+1;
        else if(mount<0) ne=ne+1;
    } while (mount!=0);
    printf("po=%d ne=%d",po,ne);
    /*coder:杨佳林-2031030054*/
}