#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a;

    cin>>a;
    if (a >=80){
        cout<<"G";
    }else if (a >=50){
        cout<<"P";
    }else{
        cout<<"F";
    }

    return 0;
}
