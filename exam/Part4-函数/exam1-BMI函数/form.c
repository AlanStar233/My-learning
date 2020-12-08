/*1.BMI值（Body Mass Index，简称BMI），是指身高体重指数，是国际上常用的衡量人体肥胖程度和是否健康的重要标准，
BMI的计算公式是：体重指数（BMI）=体重（kg）÷身高2（m）。
现从键盘读入体重值（kg）和身高值（m），要求编写函数isFit，实现BMI值的计算，并判断BMI值是否正常，
如果BMI<18.5，打印输出"体重超轻"；
如果18.5≤BMI≤24，打印输出"体重健康"；
如果BMI>24，打印输出"超重"。
*/
#include <stdio.h>
void isFit(float height,float weight)    /*自定义函数isFit，并引入初始值*/
{
    int situation;    /*用于判断case*/
    float BMI;    /*BMI存在小数，所以使用浮点*/
    BMI=weight/(height*height);    /*执行计算*/
    //对case进行分段
    if(BMI<18.5) situation=1;
    else if(BMI>=18.5 && BMI<=24) situation=2;
    else if(BMI>24) situation=3;
    //通过switch分别返回对应值
    switch (situation)
    {
    case 1:printf("So light!");break;
    case 2:printf("Fitness!");break;
    case 3:printf("Overweight!");break;
    }
}
void main()
{
    float my_height,my_weight;
    printf("Please type your height & weight:");
    scanf("%f %f",&my_height,&my_weight);
    isFit(my_height,my_weight);
}