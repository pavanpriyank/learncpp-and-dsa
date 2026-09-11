#include<iostream>
using namespace std;
int main(){

    double a,b;
    char sign;

    cout<<" Enter 1st number: ";
    cin>>a;

    cout<<" Enter 2nd number: ";
    cin>>b;

    cout<<" Enter opertor (+,-,*,/): ";
    cin>>sign;

    switch (sign){

    case '+':
        cout<< "Result = " << a + b;
        break;

    case '-':
        cout<< "Result = " << a - b;
        break;

    case '*':
        cout<< "Result = " << a * b;
        break;

    case '/':
    if(b != 0){
        cout<<"Result = "<< a / b;
    }

    else{
        cout<< "cannot divide by zero! ";
    }
        break;

    default:
        cout<< " Invalid opertor! ";
        break;
    }
    return 0;
}