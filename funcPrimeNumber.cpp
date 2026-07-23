#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=(num-1);i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

bool isPrimeBtr(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int a,b;
    a=2,b=1000;

    for(int i=a;i<=b;i++){
        if(isPrimeBtr(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}