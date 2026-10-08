#include<iostream>
using namespace std;
int main(){

    int x = 8;
    double dec = 9.3;
    int *ptr = &x;
    double *ptrd =&dec;

    cout<<"size of x is "<<sizeof(x)<<endl;
    cout<<"size of dec is "<<sizeof(dec)<<endl;

    cout<<ptr<<" "<<(ptr + 1)<<endl;
    cout<<ptrd<<" "<<(ptrd + 1)<<" "<<(ptrd +2)<<" "<<(ptrd - 1)<<endl;

    return 0;
}