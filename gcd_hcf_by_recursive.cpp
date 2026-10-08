#include<iostream>                     // Euclid's algorithm
using namespace std;                   // if we sub a smaller num from a larger one, (we can reduce the larger no) but gcd(greatest common divisible) will not change

int hcf(int a, int b){
    if(b > a) return hcf(b, a);
    if(b == 0) return a; // base case
    return hcf(b ,a%b);
}
int main(){

    int x = hcf(5,8);
    cout<<x<<endl;
    return 0;
}