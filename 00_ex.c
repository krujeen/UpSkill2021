#include <stdio.h>

int main()
{
    int a;      // ประกาศตัวแปร a เป็นจำนวนเต็ม
    float b;    // ประกาศตัวแปร b เป็นจำนวนทศนิยม
    double c;   // ประกาศตัวแปร c เป็นจำนวนทศนิยม
    char d;     // ประกาศตัวแปร d เป็นตัวอักขระ  ตัวอักษร

    double sum;

    scanf("%d",&a);
    scanf("%f %f",&b,&c);

    sum = a+b+c;

    printf("%d\n",a);
    printf("%f\n",b);
    printf("result = %.2f\n",sum);

    return 0;
}
