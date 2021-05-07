#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n,i;
    int sum=0;

    cin>>n;
    for(i=1;i<=n;i++){
        cout<<i<<" ";
        sum += i;
    }
    cout<<endl<<sum;

    return 0;
}
