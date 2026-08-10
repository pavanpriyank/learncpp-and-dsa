#include<iostream>
using namespace std;

void process(int *arr, int n){
    // inside this function we have the access of the same array in the main
    
       for(int i = 0 ;i < n ;i++){
        cout<<*(arr + i)<<endl;
    }
}
int main(){
    int arr[3] = {3, 11, 14};
    process(arr , 3);
    return 0;
}