#include<iostream>                   // ask and understand 
#include<vector>
#include<climits>
using namespace std;

int partition(int arr[], int L, int r){

int pivot = arr[r];
int i=L;

for(int j = L;j<r;j++){
    if(arr[j]<pivot){
        swap(arr[i],arr[j]);
        i++;
        }
    }
    swap(arr[i],arr[r]);
    return i;
}

int kthSmallest(int arr[], int L, int r, int k){

    if(k>0 && k<=r-L+1){

        int pos = partition(arr, L, r);  // position of pivot element

        if(pos-L==k-1){
            return arr[pos];
        }
        else if(pos-L>k-1){
            return kthSmallest(arr,L,pos - 1,k);
        }
        else{
            return kthSmallest(arr,pos + 1,r,k-pos+L-1);
        }
    }
    return INT_MAX;
}

int main(){

    int arr[] = {3,2,4,6,5,2,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;

    cout<<kthSmallest(arr, 0, n -1 ,k)<<endl;

    return 0;

}