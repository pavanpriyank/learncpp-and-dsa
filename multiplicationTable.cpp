#include<iostream>
#include<iomanip>  
using namespace std;
int main(){
    int num;
    cout<<"Enter a number -> ";
    cin>>num;

    cout<<"Multiplication Table of "<< num <<" : "<<endl;
    for(int i = 1;i<=10;i++){
        cout<< num<<setw(5)<<"*"<<setw(5)<<i<<setw(5)<<"="<<setw(5)<<num*i<<"\n";
    }
    return 0;
}