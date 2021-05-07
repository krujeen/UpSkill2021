#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    int sum=0;

    do{
        cin>>x;
        sum += x;
    }while(x!=0);

    cout<<sum;

    return 0;
}
