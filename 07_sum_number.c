#include <stdio.h>

int main()
{
    // หาผลรวม 123456 = 1+2+3+4+5+6 = 21
    int x;
    scanf("%d",&x);
    int sum = 0;

    do{
        sum += x%10;      
        x = x/10;
        
    }while(x>0);

    printf("%d",sum);

    return 0;
}
