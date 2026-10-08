#include<iostream>
using namespace std;
int main(){

    int x =18;
    float y = 7.9;

    // Create a pointer that can store address of x;
    // As x is an integer variable, so we need a pointer 
    // that can store address of integer type
    int *ptr = &x;
    cout<<" Address stored inside ptr: "<<ptr<<"\n";
    cout<<" Value present at the address stored in ptr:"<<*ptr<<"\n"; //dereference

    // Create a pointer that can store address of y
    // As y is an float variable, so we need too store it in a 
    // float pointer
    float *ptrf = &y;
    cout<<" Address stored inside ptr: "<<ptrf<<"\n";
    cout<<" Value present at the address stored in ptr:"<<*ptrf<<"\n"; //dereference

    //______________________

    x = 23; // the bucket x updated the value from 18 -> 23
    // but ptr is still pointing to same bucket
    // now if we derefernce ptr, we will get 23

    cout<<" New updated value of x "<<x<<"\n";
    cout<<" ptr still pointing to same memory which has 23 instead of 18 -"<<*ptr<<"\n";

    // updating x with pointer 
    *ptr = 50;
    cout<<"New value of x"<<x<<endl;
    cout<<"New value pointed by ptr "<<*ptr<<endl;

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;
    return 0;
}