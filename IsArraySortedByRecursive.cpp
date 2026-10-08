#include<iostream>
using namespace std;

bool f(int *arr, int n,int i, int x){
    // base case
    if(i == n){
        // array is exhausted/finished
        return false; 
    }
    return (arr[i] == x) || f(arr, n , i+1, x);
}
int main(){

    int arr[] = {5,4,2,1,6,8,-9,-4,-3};
    int n = 9;
    int x = 8;
    bool result = f(arr, n, 0, x);
    if(result) cout<<"yes";
    else cout<<"No";
    return 0;
}