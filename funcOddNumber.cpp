#include<iostream>
using namespace std;

bool isOdd(int num){
    if(num%2!=0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b;
    a=1,b=10;
    
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}