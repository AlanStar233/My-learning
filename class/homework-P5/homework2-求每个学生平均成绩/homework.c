#include <stdio.h>
void main()
{ int i,j;
float score[11][4],sum;
  for(i=0;i<=10;i++)  
    for(j=0;j<3;j++)
		scanf("%f",&score[i][j]);
  for(i=0;i<=10;i++)
     { sum=0;
        for(j=0;j<3;j++)
			sum=score[i][0]+score[i][1]+score[i][2];
      score[i][3]=sum/3.0;
     }
	printf(" Math English Objective_C Average\n");
	for(i=0;i<=10;i++)
	{
		for(j=0;j<4;j++)
			printf("  %3.1f",score[i][j]);
		printf("\n");
	}
    /*coder:杨佳林-2031030054*/
}