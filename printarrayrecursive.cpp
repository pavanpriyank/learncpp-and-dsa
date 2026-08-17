#include<iostream>
using namespace std;

void f(int *arr, int idx, int n){
    //base case
    if(idx == n)return;
    // self work
    cout<<arr[idx]<<"\n";
    //assume that
    f(arr, idx+1,n); // assume it works correctly -> it will print the remaining arr
}
int main(){
    int n = 5;
    int arr[] = {6,3,3,7,8,2};
    f(arr, 0, n);
    return 0;
}
