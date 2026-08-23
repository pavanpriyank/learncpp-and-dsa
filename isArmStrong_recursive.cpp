#include<iostream>                               // ask
using namespace std;

int pow_recursive(int p, int q){                 // An armstrong num is a num if the sum of every digit in that num raised to the
    // base case                                 // power of total digits in that num is equal to the number
    if(q == 0) return 1;
    if(q%2 == 0){
        // if q is even
        int result = pow_recursive(p , q/2);
        return p * result * result;
    }
    else{
        // if q is odd
        int result = pow_recursive(p, (q-1)/2);
        return p * result * result;
    }
}

int f(int n, int d){
    // base case
    if(n == 0) return 0;
    return pow_recursive(n%10, d) + f(n/10, d);
}

int main(){

    int n;
    cin>>n;

    int no_of_digits = 0;
    int temp = n;
    while(temp > 0){
        temp = temp / 10;
        no_of_digits++;
    }

    int result = f(n, no_of_digits);
    if(result == n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}