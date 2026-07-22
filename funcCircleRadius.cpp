#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

double area(int r){
    return 3.14*square(r);
}

double circumference( int r){
    return 2*3.14*r;
}
int main(){
    int r=3;

    cout<<area(r)<<"\n"<<circumference(r)<<endl;

    return 0;
}