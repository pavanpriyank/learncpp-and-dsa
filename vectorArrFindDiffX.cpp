#include<iostream>
using namespace std;
int main(){
    int arr[]={-3,-1,1,6,8,12,15,19};
    int n=8;
    int x=4;

    int i=0;
    int j=0;
    bool found=false;
    while(i<n && j<n){
        if(abs(arr[i]-arr[j])==x){
            found = true;
            break;

        }
        else if(abs(arr[i]-arr[j]<x)){
            j++;
        }
        else{
            i++;
        }
    }
    if(found==true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}