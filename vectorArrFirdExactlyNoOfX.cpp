#include<iostream>
using namespace std;
int main(){
int arr[]={1,3,3,5};
int n=4;
int x=6;
// code to find exact number of pairs  whose sum is exactly x
int i=0,j=n-1;
int pairs=0;
while(i<j){
    if(abs(arr[i])+abs(arr[j])==x){
       pairs++;
       i++;
       j--; 
    }
    else if(arr[i]+arr[j]<x){
        i++;
    }
    else{
        j--;
    }
}
   cout<<pairs<<endl;
    return 0;
}