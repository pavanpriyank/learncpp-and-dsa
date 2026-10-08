#include<iostream>
using namespace std;

int f(int *arr, int idx, int n){
    //base case
    if(idx == n - 1){
    // idx is at the last index so there is only one element unuder consideration
    return arr[idx];
    }

    return arr[idx] + f(arr, idx + 1 , n);
}
int main(){
    int arr[] = {2,3,6,1,6,8};
    int n = 6;
    cout<<f(arr, 0 ,n);
    return 0;
}