#include <stdio.h>
int vd10()
//int main()
{
    int basic;
    printf("\n Please enter your basic:");
    scanf("%d", &basic);
    switch (basic)
    {
        case 200:
            printf("\n Bonus is dollar %d\n", 50);
        break;
        case 300:
            printf("\n Bonus is dollar %d\n", 125);
        break;
        case 400:
            printf("\n Bonus is dollar %d\n", 140);
        case 500:
            printf("\n Bonus is dollar %d\n", 175);
        break;

        default:
            printf("\n Invalid entry");
        break;
    }
}