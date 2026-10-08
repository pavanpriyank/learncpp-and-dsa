#include<iostream>
using namespace std;

int f(int *arr,int idx, int n){
    //base case
    if(idx == n-1){
        // we only have one element left, so it is the maximum
        return arr[idx];
    }
    return max(arr[idx] , f(arr,idx + 1, n));
}
int main(){

    int arr[] = {4,7,12,43,25,65,257};
    int n = 7;
    cout<<f(arr, 0 , n);
    return 0;
}
