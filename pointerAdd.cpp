#include<iostream>
using namespace std;
int main(){

    int x, y; // declare x and y, so x, y has garbage value 

    cin>>x>>y;  // taking input of x and y

    int *ptrx = &x;  // &x fetches address of x and then store it in ptrx
    int *ptry = &y;  // &y fetches address of y and then store it in ptry

    int result; // declare result so i has garbage value

    int *ptr_result = &result;

    *ptr_result = *ptrx  + *ptry;

    /*
      *ptrx -> 10    
      *ptry -> 20
      *ptrx + *ptry -> 30
      *ptr_result =  30;  we store 30 on the address stored in *ptr_result
      result =30 
    */




    cout<<result<<'\n';
    cout<<*ptr_result<<"\n";
    return 0;
}
