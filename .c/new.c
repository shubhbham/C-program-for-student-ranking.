#include <stdio.h>

int main()
{
    float physics, chemistry, maths;
    float total;

    printf("enter physics marks\n");
    scanf("%f", &physics);

    printf("Enter the marks of chemistry\n");
    scanf("%f", &chemistry);

    printf("enter maths marks\n");
    scanf("%f", &maths);

    total = (physics + chemistry + maths) / 3;

    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {

        printf("Your total percentage is %f and Your fail...,.\n", total);
    }
    if (total > 40 && total < 59)
    {
        printf("Your percentage is %f and Second class!!\n", total);
    }
    if (total > 59 && total < 85)
    {
        printf("Your percentage is %f and First class!!\n", total);
    }

    if (total > 85 && total <=100)
    {
        printf("Your percentage is %f and  Distinction!!\n", total);
    }

    printf("Thank You!!\n");

    return 0;
}