#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int sum=0;

    for(i=1;i<=n;i++){
        sum += i;               // sum = sum +i;
        printf("%d",i);
        if(i<n){
            printf("+");
        }else{
            printf("=");
        }
    }
    printf("%d",sum);


    return 0;
}
