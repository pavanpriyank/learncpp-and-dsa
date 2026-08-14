#include<iostream>
using namespace std;

int sum(int n){
    //base case
    if(n <= 9 and n >= 0) return n;
    return sum(n / 10) + (n % 10);
}
int main(){
    int result = sum(12345);
    cout<<result;
    return 0;
}