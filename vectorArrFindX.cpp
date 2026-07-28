#include<iostream>
using namespace std;
int main(){

    int arr[]={-2,-1,0,3,6,8,11,12};
    int x=100;
    int n=8;
    //code to find if there is a pair with sum x
    int i=0;
    int j=n-1;
    bool found = false;
    while (i<j){
        if(arr[i]+arr[j]==x){
            //we founnd a pair
            found=true;
            break;
        }
        else if(arr[i]+arr[j]<x){ 
            i++;         //sum is less than x, increase the sum
        }
        else{
            j--;           //sum is less than x, decrease the sum
        }
    }
    if(found == true){
        cout<<"yes";
    }
    else{
         cout<<"no";
    }
    return 0;
}