#include <stdio.h>

int main()
{
    int money;
    scanf("%f",&money);
    int B1000,B500,B100;

    B1000 = money/1000;
    money = money%1000;
    B500  = money/500;
    money = money%500;
    B100  = money/100;

    printf("B1000 : %d\n",B1000);
    printf("B500  : %d\n",B500);
    printf("B100  : %d\n",B100);

    return 0;
}
