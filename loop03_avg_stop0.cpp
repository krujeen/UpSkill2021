#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    int sum=0;
    int count = 0;
    float avg;
    do{
        cin>>x;
        if(x!=0){
            count ++;
            sum += x;
        }
    }while(x!=0);
    avg = 1.0*sum/count;
    printf("%.2f",avg);

    return 0;
}
