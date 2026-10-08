#include<iostream>
using namespace std;
int main(){

    int x = 9;

    int *ptr = &x;

    // ptr = 5; we cant do this as ptr only stores address nothing else

    // *ptr = &y; this wont work as we cannot store address in an int bucket

    cout<<" Address of x "<<&x<<endl;
    cout<<" address stored inside ptr "<<ptr<<endl;
    cout<<" Address of ptr itself "<<&ptr<<endl; // prints the address of the ptr bucket not the address storoed in ptr

}